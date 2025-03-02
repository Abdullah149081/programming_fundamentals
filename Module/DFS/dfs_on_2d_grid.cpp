#include <bits/stdc++.h>
using namespace std;

char gird[105][105];
bool vis[105][105];
// Direction vectors for movement (up, down, left, right)
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

// Check if cell (i, j) is within the grid boundaries
bool isValid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

// Depth-first search to traverse the grid
void dfs(int si, int sj)
{
    // Print current cell coordinates
    cout << si << " " << sj << endl;
    vis[si][sj] = true;

    // Explore in all four directions
    for (size_t i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        cout << ci << " " << cj << endl;
        // if (isValid(ci, cj) && !vis[ci][cj])
        // {
        //     dfs(ci, cj);
        // }
    }
}

int main()
{
    cin >> n >> m;
    // Correctly read grid input using loop variables i and j
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            cin >> gird[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);

    return 0;
}
