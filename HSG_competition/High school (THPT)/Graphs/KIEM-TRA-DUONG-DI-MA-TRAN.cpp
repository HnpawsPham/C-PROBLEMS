#include <bits/stdc++.h>
using namespace std;

int n, m, ax, ay, bx, by;
vector<vector<int>> a(10001, vector<int>(10001, 0));

int dy[] = {-1, 0, 0, 1},
    dx[] = {0, -1, 1, 0};

bool dfs(int i, int j)
{
    if (a[i][j] == 2)
    {
        return true;
    }

    a[i][j] = 1;

    for (int x = 0; x < 4; x++)
    {
        int i1 = i + dy[x];
        int j1 = j + dx[x];

        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] != 1)
        {
            if (dfs(i1, j1))
            {
                return true;
            }
        }
    }

    return false;
}

bool bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    a[i][j] = 1;

    while (!q.empty())
    {
        pair<int, int> current = q.front();
        q.pop();

        for (int x = 0; x < 4; x++)
        {
            int i1 = current.first + dy[x];
            int j1 = current.second + dx[x];

            if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] != 1)
            {

                if (a[i1][j1] == 2)
                {
                    return true;
                }

                q.push({i1, j1});
                a[i1][j1] = 1;
            }
        }
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    cin >> ax >> ay >> bx >> by;
    a[bx][by] = 2;

    cout << (bfs(ax, ay) ? "YES" : "NO") << endl;

    return 0;
}