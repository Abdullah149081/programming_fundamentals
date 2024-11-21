#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls;
    int roll;
    double gpa;

    // Constructor
    Student(int c, int r, double g)
    {
        cls = c;
        roll = r;
        gpa = g;
    };
};

int main()
{
    Student obj(4, 5, 4.00);

    cout << obj.cls << " " << obj.roll << "" << " " << obj.gpa;

    return 0;
}
