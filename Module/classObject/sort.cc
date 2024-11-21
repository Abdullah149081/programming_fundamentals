#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int a[5] = {1, 2, 4, 3, 5};

    sort((a), a + n); // Asending

    sort(a, a + n, greater<int>()); // descending

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
