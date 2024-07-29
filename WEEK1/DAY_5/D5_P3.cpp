// functions
#include "records.h"
Student::Student(int id, string name)
{
    this->id = id;
    this->name = name;
}
int Student::getId() const
{
    return id;
}
string Student::getName() const
{
    return name;
}
// this way we can implement self created .h files.
