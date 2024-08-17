#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> a(10001, vector<int>(10001, 0));
int dx[] = {-1, 0, 0, 1},
    dy[] = {0, -1, 1, 0};

void dfs(int i, int j)
{
    a[i][j] = 0;

    for (int x = 0; x < 4; x++)
    {
        int i1 = i + dx[x];
        int j1 = j + dy[x];

        if (i1 > 0 && i1 <= n && j1 > 0 && j1 <= m && a[i1][j1] == 1)
        {
            dfs(i1, j1);
        }
    }
}

void bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});

    a[i][j] = 0;

    while (!q.empty())
    {
        pair<int,int> current = q.front();
        q.pop();

        for (int x = 0; x < 4; x++)
        {
            int i1 = current.first + dx[x];
            int j1 = current.second + dy[x];

            if (i1 > 0 && i1 <= n && j1 > 0 && j1 <= m && a[i1][j1] == 1)
            {
                q.push({i1, j1});
                a[i1][j1] = 0;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }

    int cnt = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 1)
            {
                cnt++;
                // dfs(i, j);
                bfs(i, j);
            }
        }
    }

    cout << cnt << endl;

    return 0;
}