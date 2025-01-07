#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> l;
    bool seen[1001] = {0};
    int val;

    while (cin >> val && val != -1)
    {
        if (!seen[val])
        {
            seen[val] = true;
            l.push_back(val);
        }
    }

    for (auto &r : l)
    {
        cout << r << " ";
    }

    return 0;
}

// ==========

/* 
#include <bits/stdc++.h>
using namespace std;
int main()
{

    list<int> l;
    int val;

    while (cin >> val && val != -1)
    {
        l.push_back(val);
    }

    l.unique();
    l.sort();
    for (auto &r : l)
    {
        cout << r << " ";
    }

    return 0;
}

 */