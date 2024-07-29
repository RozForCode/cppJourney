// map - sorted set of key-value pairs
#include <iostream>
#include <string>
#include <map>
using namespace std;
// a single element in map is a pair element
template <typename T, typename T1>
void print_pair(pair<T, T1> &p)
{
    cout << p.first << ":" << p.second << endl;
}
template <typename T>
void print_map(T &m)
{
    if (m.empty())
        return;
    for (auto x : m)
        print_pair(x);
    cout << endl;
}
int main()
{
    map<string, string> m1;
    m1 = {{"george", "wahsinton"}, {"ellen", "mother"}};
    cout << m1.size() << endl;
    print_map(m1);
    // insert function is similar to set and same in case of multi
    // rest function name and purpose also same.
    return 0;
}