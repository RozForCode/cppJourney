#include <iostream>
#include <string>
using namespace std;

// template implementation for strongly typed variables
template <typename T>
T pi = T(3.14159345234544623463563265L);

template <typename T>
T area_of_circle(const T &r)
{
    return r * r * pi<T>;
}
int main()
{
    cout.precision(20);
    cout << pi<double> << endl;
    cout << pi<float> << endl;
    cout << pi<long double> << endl;

    cout << pi<long double> << " " << area_of_circle<long double>(3) << endl;
    cout << pi<float> << " " << area_of_circle<float>(3) << endl;
    return 0;
}