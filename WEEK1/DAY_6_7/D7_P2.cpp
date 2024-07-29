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
    // printV(v1);//this will also work- called template argument deduction - compiler deduces the type of argument
    return 0;
}