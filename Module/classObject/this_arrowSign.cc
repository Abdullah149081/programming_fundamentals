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
        this->cls = cls;     // Method: 1
        (*this).roll = roll; // Method: 2
        this->gpa = gpa;
    };
};

Student fun()
{
    Student obj(4, 5, 4.00);
    return obj;
}

int main()
{
    Student obj = fun();

    cout << obj.cls << " " << obj.roll << "" << " " << obj.gpa;

    return 0;
}
