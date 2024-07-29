#pragma once
using namespace std;
#include <vector>
#include <string>

class Student
{
private:
    int id;
    string name;

public:
    Student(int id, string name);
    int getId() const;
    string getName() const;
};

class Grade
{
private:
    int id;
    int course_id;
    char credit;

public:
    Grade(int, int, char);
    int getId() const;
    int getCourseId() const;
    char getCredit() const;
};
class Course
{
private:
    int course_id;
    string name;
    char credit;

public:
    Course(int, string, char);
    int getCourse_id() const;
    string getName() const;
    char getCredit() const;
};
class StudentRecords
{
private:
    vector<Student> students;
    vector<Course> courses;
    vector<Grade> grades;
    float getNumGrade(char) const;

public:
    void addStudent(int, string);
    void addCourse(int, string, char);
    void addGrade(int, int, char);
};