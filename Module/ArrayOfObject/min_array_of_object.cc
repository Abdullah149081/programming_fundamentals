#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int t;
    cin >> t;

    Student students[t];

    for (int i = 0; i < t; i++)
    {
        cin >> students[i].name >> students[i].roll >> students[i].marks;
    }

    Student min_student;
    min_student.marks = INT_MAX;

    for (int i = 0; i < t; i++)
    {
        if (students[i].marks < min_student.marks)
        {
            min_student = students[i];
        }
    }
    cout << min_student.name << " " << min_student.roll << " " << min_student.marks << endl;

    return 0;
}