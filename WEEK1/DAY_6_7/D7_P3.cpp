// STL containers
// vectors
#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
void printV(vector<T> &v)
{
    if (v.empty())
        return;
    for (const T &i : v)
        cout << "Element is " << i << " ";
    cout << endl;
}
int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    printV<int>(v1);
    v1.insert(v1.begin(), 42);
    v1.erase(v1.begin());
    v1.push_back(47);
    v1.pop_back();
    v1.clear();
    v1.insert(v1.end(), {1, 2, 3, 4, 5});
    printV(v1);
    cout << endl
         << endl;

    int ia[10] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    cout << ia << endl;
    vector<int> v2(ia, ia + 10);

    // template <class InputIterator>
    // vector(InputIterator first, InputIterator last, const Allocator& alloc = Allocator());
    // first is the iterator to the first element of ia and second argument is the iterator to the last element of ia i.e ia+10
    printV(v2);
    vector<int> v3(ia, ia + 4);
    // In C++, when you pass an array name to a function or a constructor, it decays into a pointer to its first element
    printV(v3);

    vector<int> v4(move(v3));
    printV(v4);

    return 0;
}