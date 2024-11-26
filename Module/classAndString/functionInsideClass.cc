#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age, math, english;

    Student(string name, int age, int math, int english)
    {

        this->name = name;
        this->age = age;
        this->math = math;
        this->english = english;
    };
    void personInfo()
    {
        cout << name << " your age is:" << age << endl;
    }
    void totalMarks()
    {
        cout << name << " Your Total marks = " << math + english << endl;
    }
};

int main()
{
    string s;
    getline(cin, s);

    int age, math, eng;
    cin >> age >> math >> eng;

    Student obj(s, age, math, eng);

    obj.personInfo();
    obj.totalMarks();

    return 0;
}
