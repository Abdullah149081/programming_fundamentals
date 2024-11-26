#include <bits/stdc++.h>
using namespace std;

class CpDynamicObject
{
public:
    string name;
    int number;

    CpDynamicObject(string name, int num)
    {
        this->name = name;
        this->number = num;
    };
};

int main()
{

    CpDynamicObject *obj = new CpDynamicObject("Programming Hero", 1322901105);

    CpDynamicObject *obj1 = new CpDynamicObject("Phitron", 1322810881);

    *obj = *obj1;
    delete obj1;

    cout << obj->name << " " << obj->number;

    return 0;
}
