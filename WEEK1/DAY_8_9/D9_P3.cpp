#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
template <typename T>
class embiggen
{
    T _accum = 1;

public:
    T operator()(const T &n1, const T &n2) { return _accum = n1 * n2 * _accum; }
};
template <typename T>
void display_v(vector<T> &v)
{
    if (!v.size())
        return;
    for (T e : v)
        cout << e << " ";
    cout << endl;
};
int main()
{
    vector<long> v1 = {1, 2, 3, 4, 5};
    vector<long> v2 = {5, 52, 35, 54, 55};
    vector<long> v3(v1.size(), 0);
    embiggen<long> fbig;
    // multiplies<long> fbig; // is a standard stl functor

    transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), fbig);
    display_v(v1);
    display_v(v2);
    display_v(v3);

    return 0;
}
// transform can also be used to change types.