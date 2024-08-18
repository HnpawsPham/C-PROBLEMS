#include <bits/stdc++.h>
using namespace std;

int n, m, ax, ay, bx, by;
vector<vector<int>> a(10001, vector<int>(10001)),
                    path(10001, vector<int>(10001));

int dy[] = {-1, 0, 0, 1},
    dx[] = {0, -1, 1, 0};

void bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});

    a[i][j] = 1;
    path[i][j] = 0;
    
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
                path[i1][j1] = path[current.first][current.second] + 1;

                if (a[i1][j1] == 2)
                {
                    return;
                }

                q.push({i1, j1});
                a[i1][j1] = 1;
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    cin >> ay >> ax >> by >> bx;
    a[by][bx] = 2;

    bfs(ay, ax);

    cout<<(path[by][bx] > 0 ? to_string(path[by][bx]) : "NO")<<endl;

    return 0;
}