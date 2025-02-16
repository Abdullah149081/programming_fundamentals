#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;                            // max
    priority_queue<int, vector<int>, greater<int>> pq; // min

    while (true)
    {
        int n;
        cout << "Enter Number:" << endl;
        cin >> n;
        if (n == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(logN)
        }
        else if (n == 1)
        {
            pq.pop(); // O(logN)
        }
        else if (n == 2)
        {
            cout << pq.top() << endl; // O(1)
        }
        else
            break;
    }

    return 0;
}
