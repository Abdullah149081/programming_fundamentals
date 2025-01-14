#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = n - 1;
    while (l <= r)
    {
        cout << "Current range: l = " << l << ", r = " << r << endl;

        int mid = l + (r - l) / 2;
        cout << "Mid index: " << mid << ", Value: " << a[mid] << endl;

        if (a[mid] == x)
        {
            cout << "Element found at index: " << mid << endl;
            return 0; // Exit after finding the element
        }
        if (x > a[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << "Element not found. Insert position: " << l << endl;
    return 0;
}
