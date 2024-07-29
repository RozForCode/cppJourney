// Yes, that's correct. For a normal for loop to work, the iterating object's size should be determinable at run-time, which is typical for containers like arrays, vectors, and lists. These containers have methods to obtain their size dynamically (size(), begin(), end()), and they support iteration with iterators.
// apply and fold expression
// to use apply we need <tuple> or <utility> headers
//  std::apply in C++ takes a callable (such as a function, lambda, or function object) and a tuple (or pair) as arguments. It then "unpacks" the tuple and passes its elements as arguments to the callable. This allows you to call a function with a tuple's elements as if they were individual arguments.
#include <iostream>
#include <string>
#include <tuple>
#include <utility>
using namespace std;

void print(int a, double b, const string &c)
{
    cout << a << b << c << endl;
}

template <typename... Args>
double sumTuple(const tuple<Args...> &t)
{
    return std::apply([](const auto &...args)
                      { return (args + ...); }, t);
}
// all lambda functions in C++ must have a lambda capture clause
//  [] lambda expression known as lambda capture clause
//  const auto &...args - this parameter means that the function can take any no.of arguments and each argument is a constant reference
//  args + ... - means take all the arguments in the parameter pack 'args' and apply + operator between them.
int main()
{
    tuple<int, double, string> t(42, 3.14, "Hello");
    apply(print, t);
    cout << endl;
    tuple<int, double, float> t1(1, 23.345, 3.564526);
    double sum = sumTuple(t1);
    cout << sum;
    return 0;
}
/*
No capture [] - means no variables from the surronunding are captured
eg auto lambda = []() { return 42; };
⁡⁢⁣⁢Capture value⁡ [x,y]
int x = 1, y = 2;
auto lambda = [x, y]() { return x + y; };
⁡⁢⁣⁢Capture By reference⁡ [&x, &y]
int x = 1, y = 2;
auto lambda = [&x, &y]() { x += y; };
⁡⁢⁣⁢Capture all By refernce and all By value⁡
v
int x = 1, y = 2;
auto lambda = [=]() { return x + y; };
r
int x = 1, y = 2;
auto lambda = [&]() { x += y; };
⁡⁢⁣⁢Mixed Capture⁡
int x = 1, y = 2;
auto lambda = [x, &y]() { y += x; };
*/