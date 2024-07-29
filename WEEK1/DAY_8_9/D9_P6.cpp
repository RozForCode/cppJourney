// Algorithms
#include <iostream>
#include <string>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;
template <typename T>
void displayV(vector<T> &v)
{
    if (v.empty())
        return;
    if (typeid(T) == typeid(bool))
        for (bool e : v)
            cout << (e ? "T" : "F") << " ";
    else
        for (T e : v)
            cout << e << " ";
    cout << endl;
}

int main()
{
    long n = 24;
    vector<long> v1 = {23, 54, 24, 334, 566, 1, 1};
    sort(v1.begin(), v1.end()); // without sort not found as binary search works on a sorted list
    if (binary_search(v1.begin(), v1.end(), n))
        cout << "found" << endl;
    else
        cout << "Not found" << endl;
    return 0;
}
// there are many other functions
//  all_of - true or false, any_of, none_of - arguments - 2 iterators and a predicate function
