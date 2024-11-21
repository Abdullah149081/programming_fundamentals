#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student obj;

    char temp[100] = "Abdullah Al Masud";

    strcpy(obj.name, temp);
    obj.roll = 100;
    obj.gpa = 4.00;

    cout << "Name: " << obj.name << endl
         << "Roll: "
         << obj.roll << endl
         << "GPA: "
         << obj.gpa;

    return 0;
}
