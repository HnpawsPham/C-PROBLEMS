#include <bits/stdc++.h>
using namespace std;

int n, m, cnt = 0;
int a[701][701];

int dy[] = {-1, 0, 0, 1},
    dx[] = {0, -1, 1, 0};

int dfs(int i, int j)
{
    a[i][j] = 0;

    for (int x = 0; x < 4; x++)
    {
        int i1 = i + dy[x];
        int j1 = j + dx[x];

        if (i1 < 0 || i1 >= n || j1 < 0 || j1 >= m || a[i1][j1] == 0)
        {
            continue;
        }

        dfs(i1, j1);
    }
}

int main()
{
    ios::sync_with_stdio(0);
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != 0)
            {
                dfs(i, j);
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}