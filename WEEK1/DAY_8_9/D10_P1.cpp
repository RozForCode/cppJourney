/*    PARTITIONS
these functions rearrange a contain
elements that meet the criteria are at the beginning
predicate function
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// predicate function
template <typename T>
bool is_even_tens(T &n)
{
    if (n < 10)
        return false;
    return ((n / 10) % 2) == 0;
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

    size_t sz = count_if(v1.begin(), v1.end(), is_even_tens<int>);
    vector<int> v2(sz), v3(v1.size() - sz);

    partition_copy(v1.begin(), v1.end(), v2.begin(), v3.begin(), is_even_tens<int>);

    partition(v1.begin(), v1.end(), is_even_tens<int>);
    displayV(v1);
    // stable one takesmore time
    stable_partition(v1.begin(), v1.end(), is_even_tens<int>);
    displayV(v1);
    return 0;
}