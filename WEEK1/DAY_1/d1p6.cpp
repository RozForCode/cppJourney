#include <iostream>
#include <cstdint>
using namespace std;

// type conversion
int main()
{
    float flt;
    int32_t sgn;
    uint32_t usgn;

    flt = -7.66;
    sgn = flt;  // value gets truncated not allowed in java
    usgn = sgn; // value copied without sign

    cout << flt << endl;
    cout << sgn << endl;
    cout << usgn << endl;          // 4294967289 - (2 to the power 32 - 7)
    cout << (int32_t)usgn << endl; // 4294967289 - (2 to the power 32 - 7)

    return 0;
}