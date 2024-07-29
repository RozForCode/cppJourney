// the linker doesn't know about specializations so the link step fails
// as stack.h and stack.cpp are processed differently, linker doesn't know about to put them together
// solution it to put all the implementation functions and put them in the .h file.
// not good practice but it is accepted in case of templates
#include <iostream>
#include <string>
#include "stack.h"
using namespace std;

constexpr int nums[] = {1, 2, 3, 4, 5}; // constexpr tells that value of the variable can be evaluated at compile-time instead of run-time. - faster exectution and smaller binaries.
// if all values of a function are constexpr then that function is also evaluated at compile time.
constexpr const char *strs[] = {"one", "two", "three", "four", "five"};
// str is a array of pointers to const char
// memory efficiency - string literals are stored in read-only memory, and each element of strs array is a pointer to these literals. This avoids duplicating the string data, as each pointer simply references an existing string literal
// flexible - using a pointer array allows you to handle strings of varying lengths without allocating a fixed size for each string.
// inefficent way of doing constexpr const char *strs[] = {"one", "two","three","four","five"};
// constexpr char strs[5][6] = {
//     {'o', 'n', 'e', '\0'},
//     {'t', 'w', 'o', '\0'},
//     {'t', 'h', 'r', 'e', 'e', '\0'},
//     {'f', 'o', 'u', 'r', '\0'},
//     {'f', 'i', 'v', 'e', '\0'}
// };
// so a single element in const char *str[] points to a array of chars.
// *str[1] will point to 'o'
// *(str[1]+1) will give n
// *(str[1]+2) will give e
// *(str[1]+3) will give \0
// *str[2] will point to 't'
int main()
{
    try
    {
        Stack<int> si(5);
        cout << si.size() << endl;
        cout << si.top() << endl;

        for (int i : nums)
        {
            si.push(i);
        }
        cout << "si.top() ";
        cout << si.top() << endl;

        cout << "si is" << (si.isFull() ? "" : "not") << "full" << endl;

        while (!si.isEmpty())
        {
            cout << "popped:" << si.pop() << endl;
        }
    }
    catch (StackException &e)
    {
        cout << "Stack error: " << e.what() << endl;
    }
    try
    {
        Stack<string> ss(5);

        cout << "ss size: " << ss.size() << endl;
        cout << "ss top: " << ss.top() << endl;

        for (const char *s : strs)
        {
            ss.push(s);
        }

        cout << "ss top after pushes: " << ss.top() << endl;
        cout << "ss is " << (ss.isFull() ? "" : "not ") << "full" << endl;

        while (!ss.isEmpty())
        {
            cout << "popped " << ss.pop() << endl;
        }
    }
    catch (StackException &e)
    {
        cout << "Stack error: " << e.what() << endl;
    }

    return 0;
}
