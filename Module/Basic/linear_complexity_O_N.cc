#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;    // O(1)
    cin >> n; // O(1)

    // (+) or (-) complexity
    for (int i = 1; i <= n; i++) // O(n)
    {
        cout << i << " ";
        // output: 1 2 3 4 5 6 7 8 9 10
    }

    return 0; // O(1)
}
