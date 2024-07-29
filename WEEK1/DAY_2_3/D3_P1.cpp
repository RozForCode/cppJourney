#include <iostream>
#include <cstdint>
using namespace std;
// enumerations Enum: a list of named integer constants
// inherited from C not designed for OOP, usually operate in global scope and have Limited type safety
// so in c++ we have Enum classes aka scoped enums or strongly typed enums they are encapsulated within a class scope and are type-safety enforced.
// example of global enums and probs with them:
// enum cow_purpose
// {
//     dairy,
//     meat,
//     hide,
//     pet
// }; // each of these values is assigned a sequential integer value starting at zero.
// enum grocery_station
// {
//     canned,
//     frozen,
//     meat,
//     laundary,
//     dairy,
//     bakery
// };// error
// --- global enum end

// class enums or strongly typed enums
enum class cow_purpose
{
    dairy,
    meat,
    hide,
    pet
};
enum class grocery_station
{
    canned,
    frozen,
    meat,
    laundary,
    dairy,
    bakery
};
int main()
{
    // if hide was declared here - compiler wouldn't complain and a would have it's value.
    int a = 0;
    // a = hide; // accessing global enum
    // a = cow_purpose::meat; // compiler assumes int is getting value of type cow_purpose
    a = (int)cow_purpose::hide;
    // or
    cow_purpose b;
    b = cow_purpose::meat;
    cout << a << endl;
    cout << (int)b << endl; // cout doesn't take variable of type cow_purpose so explicit casting
    return 0;
}