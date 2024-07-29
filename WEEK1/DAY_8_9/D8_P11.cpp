// transform function - used to run bulk transformations
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
class accum
{
    T _acc = 0;
    accum() {} // default constructor is private so instance cannot be created with it

    //  ostream &operator<<(ostream &o, const Rational &r) { return o << string(r); }
    // ostream& is return type operator<< is function name-which indicates that its overloading << operator
public:
    accum(T n) : _acc(n) {} // public constructor initializes  member variable with passed value
    // If you put the initialization inside the constructor body ({ _acc = n; }), _acc is first default-initialized and then assigned the value n.
    // For built-in types, the difference may be negligible, but for user-defined types, the constructor and assignment operator might have non-trivial implementations that make initialization more efficient.
    T operator()(T y) // T is return type, operator is the name of the function-it overloads the function call operator.
    {
        _acc += y;
        return _acc;
    } // usuage - objectname(value) - this will call the operator function
};
template <typename T>
void display_v(vector<T> &v)
{
    if (!v.size())
        return;
    for (T e : v)
        cout << e << " ";
    cout << endl;
}

int main()
{
    accum<int> x(7);
    cout << x(7) << endl;

    vector<int> v1 = {1, 2, 3, 4, 5};
    display_v(v1);

    vector<int> v2(v1.size());
    transform(v1.begin(), v1.end(), v2.begin(), x); // the fourth argument is a object operator. Unary function, so it's a pointer to either a function or object functor that takes one argument.
    display_v(v2);
    return 0;
}
// operator() - called function call operator. Overloading this operator allows instances of your class to be called like functions.
// Useful for defining functor objects - objects that can be used like functions