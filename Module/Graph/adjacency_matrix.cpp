#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;

    // int adj_mat[n][n];

    // memset(adj_mat, 0, sizeof(adj_mat));
    vector<vector<int>> adj_mat(n, vector<int>(n, 0));

    for (size_t i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1;
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
