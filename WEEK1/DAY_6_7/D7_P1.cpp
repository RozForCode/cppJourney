// type inference - it is the ability of a prog lang. to automatically deduce or determine the data type of a variable or an expression
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

template <typename lT, typename rT>
auto tF(lT &lhs, const rT &rhs)
{
    return lhs + rhs;
}
int main()
{
    // constexpr cannot be used here - use with literals that the compiler can evaluate at compile time
    const string y = string("this is a string class string.");
    auto z = string("this is a string class string.");
    const char *ctr = "this is a c-string";
    auto x = "this is a c-string";

    cout << "type of x is " << typeid(x).name() << endl;
    cout << "type of y is " << typeid(y).name() << endl;
    cout << "type of z is " << typeid(z).name() << endl;
    cout << z << endl;
    decltype(x) w;
    cout << "type of w is " << typeid(w).name() << endl;

    auto bin = tF<string, const char *>(z, ctr);
    cout << bin;
    cout << endl
         << typeid(bin).name();
    return 0;
}