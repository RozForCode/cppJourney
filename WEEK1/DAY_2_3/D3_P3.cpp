// Classes
// by default class members are private
#include <iostream>
using namespace std;

enum class cow_purpose
{
    dairy,
    meat,
    hide,
    pet
};
class cowPublic
{ // here class is being underused as a struct
public:
    string name;
    int age;
    cow_purpose purpose;
};
class cowPrivate
{
public:
    cowPrivate(string Name)
    {
        name = Name;
    }
    cowPrivate(string Name, int Age, cow_purpose Purpose)
    {
        name = Name;
        age = Age;
        purpose = Purpose;
    }
    string get_name() const
    { // writing const qualifier after func name makes the compiler prevents the programmer from  modifying objects inside that function.
        return name;
    }
    // this keyword is used with -> in c++ the same way as we work with pointers as this is a pointer to the current object.
    void set_name(string name)
    {
        this->name = name;
    }

private:
    string name;
    int age;
    cow_purpose purpose;
};

int main()
{
    cowPrivate newCow("hildy");

    cout << newCow.get_name() << endl;
    return 0;
}