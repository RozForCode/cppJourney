// Arrays - fixed size sequence container
// stl array is essential a wrapper around c-array
#include <iostream>

#include <string>
#include <array>
using namespace std;
template <typename T, size_t N>
// size_t is a type used to represent sizes and counts, particularly in the context of array sizes and memory allocations.
// This declares a non-type parameter N of type size_t. This parameter will represent a constant value (an integer) known at compile time. It is often used to specify the size of a statically-sized array.
void printa(array<T, N> &a)
{
    for (T &i : a)
        cout << i << " ";
    cout << endl;
}
int main()
{
    array<string, 5> a1;
    a1 = {"one", "two", "three", "four", "five"};
    cout << a1.size() << endl;
    cout << a1[2];
    string *p1 = a1.data();
    for (size_t i = 0; i < a1.size(); ++i)
    {
        cout << "Element: " << i << " is " << *p1++ << endl;
    }
    return 0;
}