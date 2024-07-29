
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// predicate function
template <typename T>
bool my_comp(const T &lh, const T &rh)
{
    return rh < lh;
}
template <typename T>
void displayV(vector<T> &v)
{
    if (v.empty())
        return;
    for (auto e : v)
        cout << e << " ";
    cout << endl;
}
int main()
{
    vector<int> v1 = {11, 234, 34, 65, 8765, 90, 80, 20};
    sort(v1.begin(), v1.end());
    displayV(v1);
    sort(v1.begin(), v1.end(), my_comp<int>);
    displayV(v1);
    // stable_sort - equal values remain in their original order
    // merge kind of similar and easy to use.
    return 0;
}