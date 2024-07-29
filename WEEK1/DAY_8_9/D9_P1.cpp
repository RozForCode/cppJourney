// lambda transformations - using lambda function in place of functor object
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

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

    int accum = 14;
    auto x = [accum](int d) mutable -> int
    { return accum += d; }; // original is not modified but copy created
    // auto x = [&accum](int d)-> int{ return accum += d;};//same work, less overhead and simple no copy created
    // mutable allows to modify the accum, even though it is captured by value
    // ->specifies return type of the lambda function
    // rest code same as D8_P11.
    // transform(v1.begin(), v1.end(), v2.begin(),[accum](int d) mutable -> int
    // { return accum += d; } ); //no semi-colon after labmda function
    vector<string> v1 = {"one", "two", "three", "four", "five"};
    vector<size_t> v2(v1.size());
    /*
        In the line std::vector<size_t> sizes = {1, 2, 3, 4, 5};, the size_t type represents an unsigned integer type that is used
         for array indexing and loop counting. It is guaranteed to be able to express the maximum size of any object that can be created by the
         implementation. The specific size and value range of size_t depend on the platform and compiler, but it is typically defined
         as unsigned long or unsigned long long on most platforms.
         The values stored in the sizes vector are:

    sizes[0] = 1
    sizes[1] = 2
    sizes[2] = 3
    sizes[3] = 4
    sizes[4] = 5
    Each of these values is of type size_t, which means they are unsigned integers. On most platforms, size_t can store very large positive
     integer values, typically up to 4,294,967,295 (2^32 - 1) on a 32-bit system or up to 18,446,744,073,709,551,615 (2^64 - 1) on a 64-bit system.
    */
    transform(v1.begin(), v1.end(), v2.begin(), [](string &s) -> size_t
              { return s.size(); });
    display_v(v2);
    return 0;
}