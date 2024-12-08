#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;    // O(1)
    cin >> n; // O(1)

    // change (*) or (/)  complexity
    for (int i = 1; i <= n; i *= 2) // O(logN)
    {
        cout << i << " "; // 4
    }

    return 0; // O(1)

    return 0;
}
