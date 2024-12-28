#include <bits/stdc++.h>
using namespace std;

void print(list<int> &my)
{
    for (auto val : my)
    {
        cout << val << endl;
    }
}

int main()
{
    list<int> myList = {10, 20, 30};

    // cout << myList.max_size();
    // myList.clear();

    myList.resize(2);
    cout << "size: " << myList.size() << endl;

    print(myList);

    myList.resize(5, 100);

    cout << "size: " << myList.size() << endl;

    print(myList);
    return 0;
}