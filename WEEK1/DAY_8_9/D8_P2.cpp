// Tuples - store multiple elements of one or more types in a single object, sized is fixed, random access
// good for returning multiple types from a function
// constructors are similar to pair
// also support comparison operators like tuples
// sometimes pairs and tuples are more convinient that a struct
#include <iostream>
#include <string>
#include <tuple>
using namespace std;
template <typename T>
void printTuple(T &t)
{
    // tuples don't have size() method so tuple_size is used.
    auto tsz = tuple_size<decltype(t)>::value;
    if (tsz != 3)
        return;
    // for (int i = 0; i < tuple_size(t); i++)
    // {
    //     cout << get<i>(t) << " ";
    // }
    if (tsz != 3)
        return;
    cout << get<0>(t) << get<1>(t) << get<2>(t) << endl;
}
int main()
{

    return 0;
}
// why can't we use normal for loop for tuple
// Ans - No begin() or end() Methods: Tuples do not have member functions like begin() and end() that return iterators, which are necessary for range-based for loops or normal for loops with iterators.
// Size and types of tuple elements are determined at compile time, whereas normal for loops operates over collections whose size may be determined at run time.
// Q2what is fold expression in cpp
// Q3what is std::apply
// Ans2 -D8P3.cpp
// ans3 - D8P4.cpp

// Q4what is variadic template
// Ans4 - these templates in C++ allow functions and classes to accept a variable number of arguments.
// makes it easier to write generic and reusage code. Great for creating flexible APIs and implementing compile-time algorithms
// example
// template<typename... Args>
// void print(Args... args) {// Args... is a template parameter pack and args... is function parameter pack.
//     (std::cout << ... << args);// the fold expression prints all arguments
// }
// With classes
// class MyTuple {
// public:
//     std::tuple<Values...> values;

//     MyTuple(Values... args) : values(args...) {}

//     void print() const {
//         std::apply([](const auto&... args) {
//             ((std::cout << args << " "), ...);
//         }, values);
//     }
// };