#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    int n;
    cin >> n;
    // for (size_t i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }

    vector<int> v(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int e : v)
    {
        cout << e << " ";
    }

    return 0;
}
