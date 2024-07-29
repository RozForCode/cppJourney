// pointers - (there's also something called smart pointers which is not convered rn)
// important use case of pointers is dynamic memory management
// & - address of operator
#include <iostream>
using namespace std;
class cow
{
public:
    cow(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
    int getAge()
    {
        return this->age;
    }
    string getName()
    {
        return this->name;
    }

private:
    int age;
    string name;
};
int main()
{
    int a = 37;
    int *ptr;
    ptr = &a;
    cout << &a << endl;
    cout << a << endl;
    cout << ptr << endl;  // address of a
    cout << &ptr << endl; // address of ptr
    cout << *ptr << endl;
    cout << endl
         << endl;

    cow *my_cow;
    my_cow = new cow(2, "preeto");
    cout << my_cow->getName() << endl;
    cout << (*my_cow).getAge() << endl;

    delete my_cow; // opposite of the new operator, memory freed
                   // delete actually calls a special method in the class called destructor
    return 0;
}