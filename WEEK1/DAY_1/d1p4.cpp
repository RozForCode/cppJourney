#include <iostream>
using namespace std;

// it not recommended to define constants using define as the type is not checked and no context
// better to use const qualifier - (used in regular variable declaration)
int main()
{
#ifdef DEBUG
// code here will only execute if the macro has been defined previously
#endif
    // const
    const int value = 100;
    const int *ptr = &value;
    cout << *ptr << endl;
    return 0;
}