#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    int roll;
    double gpa;

    // Constructor
    Student(int cls, int roll, double gpa)
    {
        this->cls = cls;
        (*this).roll = roll;
        this->gpa = gpa;
    };
};

Student *fun()
{
    Student obj(4, 5, 4.00);
    Student *p = &obj;
    return p;
}

int main()
{

    //    Dynamic Object
    Student *prt = new Student(4, 10, 3.50);

    cout << prt->cls << " " << prt->roll << " " << prt->gpa;

    // Static Object

    Student *obj = fun();

    // cout << obj->cls << " " << obj->roll << "" << " " << obj->gpa;

    return 0;
}
