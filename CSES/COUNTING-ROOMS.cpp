#include <bits/stdc++.h>
using namespace std;

int n, m, cnt = 0;
vector<vector<char>> a(1001, vector<char>(1001));

int dy[] = {-1, 0, 0, 1};
int dx[] = {0, -1, 1, 0};

void dfs(int i, int j)
{
    a[i][j] = '#';

    for (int x = 0; x < 4; x++)
    {
        int i1 = i + dy[x];
        int j1 = j + dx[x];

        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] != '#')
        {
            dfs(i1, j1);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

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
            if (a[i][j] != '#')
            {
                dfs(i, j);
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;

    return 0;
}