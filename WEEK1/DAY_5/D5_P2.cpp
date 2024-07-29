#include <iostream>
#include <string>
#include <vector>
#include <cinttypes>
using namespace std;

class student
{
public:
    student(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    int getId() { return this->id; }
    string getName() { return this->name; }

private:
    int id;
    string name;
};
class Course
{
public:
    Course(int id, string name, int8_t credits)
    {
        this->id = id;
        this->name = name;
        this->credits = credits;
    }
    int getId() { return this->id; }
    string getName() { return this->name; }
    int8_t getCredits() { return this->credits; }

private:
    int id;
    string name;
    int8_t credits;
};
class Grade
{
public:
    Grade(int student_id, int course_id, char grade)
    {
        this->student_id = student_id;
        this->course_id = course_id;
        this->grade = grade;
    }
    int getStudent_id() { return this->student_id; }
    int getCourse_id() { return this->course_id; }
    char getGrade() { return this->grade; }

private:
    int student_id;
    int course_id;
    char grade;
};
int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7};
    vector<int>::iterator ptr = numbers.begin(); // or auto ptr = numbers.begin();

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    for (auto x : numbers)
        cout << x << " ";
    return 0;
}