#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\LAND.inp");

int n, m, k;
vector<vector<int>> a(1001, vector<int>(1001));
vector<vector<int>> check(1001, vector<int>(1001, 0));

int dy[] = {-1, 0, 0, 1},
    dx[] = {0, -1, 1, 0};

void bfs(int i, int j, int time, int t)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    check[i][j]++;

    while (!q.empty())
    {
        pair<int, int> v = q.front();
        q.pop();

        for (int x = 0; x < 4; x++)
        {
            int i1 = v.first + dy[x];
            int j1 = v.second + dx[x];

            if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && check[i1][j1] < time && a[i1][j1] > t)
            {
                check[i1][j1]++;
                q.push({i1, j1});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    fi >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            fi >> a[i][j];
        }
    }

    fi >> k;
    int time = 1;

    while (time <= k)
    {
        int t;
        fi>>t;

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (check[i][j] < time && a[i][j] > t)
                {
                    bfs(i, j, time, t);
                    cnt++;
                }
            }
        }

        cout<<cnt<<" ";
        time++;
    }

    return 0;
}