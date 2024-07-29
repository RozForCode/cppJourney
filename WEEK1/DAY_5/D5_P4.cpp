#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void swap(int &x, int &y) // more efficient as it excludes the additional step of pointer dereferecing
{
    int temp = x; // references are just aliases
    x = y;
    y = x;
}
int main()
{

    return 0;
}