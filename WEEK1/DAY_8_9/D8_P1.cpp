// Pairs and tuples - useful when we want to carry multiple, stronly typed values
// Pair - doesn't support for range loops. It can store only two elements.
#include <iostream>
#include <string>
#include <utility>
using namespace std;

template <typename T, typename T1>
void printp(pair<T, T1> &p)
{
    // for (auto element : p) // - won't work
    // {
    //     cout << element << " ";
    // }

    cout << p.first << " " << p.second << endl;
}
int main()
{
    pair<int, string> p1 = {47, "forty-seven"};
    pair<int, string> p2(72, "seventy-two");
    // using make_pair
    pair<int, string> p3;
    p3 = make_pair(7, "seven");
    // we can use comparison operators on pairs eg - p1>p2 or p3==p1
    // these operators give priority to the first value
    printp(p1);
    printp(p2);
    printp(p3);

    return 0;
}