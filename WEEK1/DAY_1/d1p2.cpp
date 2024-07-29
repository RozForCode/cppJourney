#include <iostream>
#include <string>
using namespace std;
int a, b = 0;
bool my_flag;
int main()
{
    a = 7;
    b = 9;
    my_flag = false;
    a = 7;
    b = 9;

    cout << a << endl;
    cout << b << endl;
    cout << my_flag << endl;
    cout << endl;
    return 0;
}

// cin - input without space
// data types has signed and unsigned concept
// memory for global variables is managed statically by the compiler