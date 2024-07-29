// C++ Template and STL
// Template is essentially a compiler abstraction that allows you to write generic code
// ⁡⁢⁣⁢⁡⁣⁣⁢Generic code⁡⁡ - code that is written in a way that it can handle data of multiple types without being rewritten for each type.
// algorithms or data structures that can handle any type of data.
// ⁡⁣⁣⁢Compiler Abstraction⁡ - means that the compiler provides a way to write code that abstracts over specific data types, making code more general
#include <iostream>
#include <string>
using namespace std;
// template
template <typename T> // class can also be used inplace of typename
// there can be more than one typename or class in a template
T maxof(const T &a, const T &b)
{ // const - means that the function promises not to modify the values of a and b.
    return (a > b ? a : b);
}
int main()
{
    int a = 9, b = 8;
    cout << "max is = " << maxof<int>(a, b) << endl; // <int> makes the compiler recreate maxof function with  T replaced with int
    const char *c = "seven", *d = "nine";
    cout << "max is = " << maxof<const char *>(c, d) << endl; // here we'll get nine cause - our template is made for const char pointer and it is comparing the pointers and what is being pointed at.
    string e = "seven", f = "nine";
    cout << "max is = " << maxof<string>(e, f) << endl;

    return 0;
}