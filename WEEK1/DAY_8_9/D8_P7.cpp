// SETS- holds a sorted set of elements and only unique elements, multiset allows duplicates.
// UNSORTED_SET- no sort, and provides hashed keys for faster access.
// hashed keys - concept in hashed based ds for efficient data retrieval
// hashing - process of converting an input("key") into a fixed-size value, usually a numerical index using hash function
// hash function - processes the key and produces a hash code, used to determine the associated value should be stored or retrieved in a hash table.
// takes input and produces hash code - int value produced by the hash function which is used to store or retrieve value in hash table
// hash table - ds uses an array and hash code to store key-value pairs
#include <iostream>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;
template <typename T>
void print_set(T &s)
{
    if (s.empty())
        return;
    for (auto x : s)
        cout << x << " ";
    cout << endl;
}
int main()
{

    set<string> s1 = {"one", "two", "three", "four", "five"};
    print_set(s1); // result will be sorted
    // size() find() end() insert()
    // insert method returns a pair, first is an iterator pointing to new elem or duplicate second value is true or false as success
    auto r = s1.insert("one");
    cout << endl
         << r.second << endl;
    set<string>::iterator it = s1.find("four");
    if (it != s1.end())
    {
        s1.erase(it);
    }
    else
    {
        cout << "Not found" << endl;
    }
    print_set(s1);
    // for multiset<string> r won't be a pair
    return 0;
}