#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<string> v;
    int n;
    cin >> n;
    // cin.ignore();
    // for (size_t i = 0; i < n; i++)
    // {
    //     string s;
    //     getline(cin, s);
    //     v.push_back(s);
    // }

    vector<string> v(n);

    for (size_t i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    for (string e : v)
    {
        cout << e << endl;
    }

    return 0;
}
