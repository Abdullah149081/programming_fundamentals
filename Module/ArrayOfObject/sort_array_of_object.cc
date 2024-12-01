#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r)
{
    return (l.marks == r.marks) ? l.marks < r.marks : l.marks > r.marks;

    // if (l.marks < r.marks)
    //     return true;
    // else
    //     return false;

    // return l.marks < r.marks;
}

int main()
{
    int t;
    cin >> t;

    Student students[t];

    for (int i = 0; i < t; i++)
    {
        cin >> students[i].name >> students[i].roll >> students[i].marks;
    }

    sort(students, students + t, cmp);

    for (int i = 0; i < t; i++)
    {
        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
    }

    return 0;
}