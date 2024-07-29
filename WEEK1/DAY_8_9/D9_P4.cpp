// functors
// Arithmetic functors
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
    for (T e : v)
        cout << e << " ";
    cout << endl;
}
int main()
{
    vector<long> v1 = {23, 54, 24, 334, 566, 1, 1};
    vector<long> v2 = {1, 2, 3, 4, 5, 6};
    vector<long> v3(v1.size(), 0);

    negate<long> f;
    // minus<long> f;
    // multiplies<long> f;
    // divides<long> f;
    // modulus<long> f;
    // plus<long> f;
    transform(v1.begin(), v1.end(), v3.begin(), f);
    displayV(v3);
    return 0;
}
/*
When transform reaches the last element of v1, it tries to add
it to a corresponding element from v2. However, since v2 is shorter,
it accesses an out-of-bounds memory location, leading to undefined behavior
*/