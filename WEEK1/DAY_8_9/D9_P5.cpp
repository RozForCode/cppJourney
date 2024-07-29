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
    vector<long> v1 = {23, 54, 24, 334, 566, 1, 1};
    vector<long> v2 = {1, 2, 3, 4, 5, 6};
    vector<bool> v3(v1.size());
    greater<long> f;
    // less, greater_equal , less_equal, equal_to, not_equal_to
    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), f);
    displayV(v3);
    sort(v2.begin(), v2.end(), f);
    displayV(v2);
    // also logical functors -- work with 0 and 1 -- logical_and , logical_or, logical_not(unary)
    return 0;
}