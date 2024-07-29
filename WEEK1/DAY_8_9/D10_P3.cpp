// Binary searches
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// predicate function
template <typename T>
bool greater(const T &lh, const T &rh)
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
    int n = 80;
    int m(90);
    vector<int> v1 = {11, 234, 34, 65, 8765, 90, 80, 20};
    sort(v1.begin(), v1.end());
    cout << "Searching for " << n << "....";
    // stable_sort - equal values remain in their original order
    if (binary_search(v1.begin(), v1.end(), n))
    {
        auto it = binary_search(v1.begin(), v1.end(), n); // we also pass our own predicate function as long as it sorts the sequence
                                                          // using upper_bound returns a pointer to the element after the searched value.
                                                          // equal_range gives both upper and lower bound access - .first, .second;
        cout << "found" << " at index " << v1.size() - it;
    }
    else
        cout << "Not found";
    cout << endl
         << endl;
    return 0;
}