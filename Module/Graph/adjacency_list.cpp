#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adj_list(n);

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // For undirected graphs
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Node " << i << " -> ";
        for (int neighbor : adj_list[i])
        {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}
