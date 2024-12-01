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
        cin.ignore();
        getline(cin, students[i].name);
        cin >> students[i].roll >> students[i].marks;
    }

    for (int i = 0; i < t; i++)
    {

        cout << students[i].name << " " << students[i].roll << " " << students[i].marks << endl;
    }

    return 0;
}