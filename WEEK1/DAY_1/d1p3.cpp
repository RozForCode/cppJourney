// type inference
#include <iostream>
#include <typeinfo>
#include <cstdint>
using namespace std;

// Preprocessor Directives - these are commands given to the preprocessor
// it is part of compilation process that occurs before the actual compilation.
// it instructs the preprocessor to modify the source code before it compiles.
// eg. #include - includes code a file in the program,
// #define - used to define macros like constants or expressions
// what this directive does is find and replace
// #undef - to undefine defined
// #if defined(DEBUG) or #ifdef DEBUG
// #else #endif #ifndef
// #pragma - provides additional instructions to the compiler
#define CAPACITY 5000
int main()
{
    int32_t large = CAPACITY; // int32_t is included in the cstdint file
    uint8_t large1 = 2;       // prints smily face cause it is read as unsigned char ASCII 2 is a smily face
    auto a = 8;
    auto b = 1234425523234; // long
    auto c = 3.14f;
    auto d = 3.14; // double
    auto e = true;
    auto f = 'd';
    auto g = "C++"; // this is type pkc - pointer to const char (String)

    cout << "The type of a = " << typeid(a).name() << endl;
    cout << "The type of b = " << typeid(b).name() << endl;
    cout << "The type of c = " << typeid(c).name() << endl;
    cout << "The type of d = " << typeid(d).name() << endl;
    cout << "The type of e = " << typeid(e).name() << endl;
    cout << "The type of f = " << typeid(f).name() << endl;
    cout << "The type of g = " << typeid(g).name() << endl;

    cout << large << endl;
    cout << "The type of large  = " << typeid(large).name() << endl;

    cout << large1 << endl;
    cout << "The type of large1  = " << typeid(large1).name() << endl;

    return 0;
}