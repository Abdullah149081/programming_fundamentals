#include <bits/stdc++.h>
using namespace std;

void bfs(int src, vector<vector<int>> &adj_list, vector<bool> &vis)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();   

        cout << par << " ";

        for (auto child : adj_list[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adj_list(n);
    vector<bool> vis(n, false);

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int st_node = 0;
    bfs(st_node, adj_list, vis);

    return 0;
}
