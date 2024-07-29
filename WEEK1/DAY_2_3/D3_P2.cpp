// structions
// they are containers of heterogeneous data members
// useful for implementing simple models
// Structures are also C constructs but different syntax rules
#include <iostream>
#include <string>
using namespace std;

enum class cow_purpose
{
    dairy,
    meat,
    hide,
    pet
};
struct cow
{
    string name;
    int age;
    cow_purpose role;
};
int main()
{
    cow myCow;
    myCow.age = 5;
    myCow.name = "pinky";
    myCow.role = cow_purpose::dairy;

    return 0;
}