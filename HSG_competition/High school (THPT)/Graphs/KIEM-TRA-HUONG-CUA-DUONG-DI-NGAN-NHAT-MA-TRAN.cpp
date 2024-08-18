#include <bits/stdc++.h>
using namespace std;

int n, m, ax, ay, bx, by;
vector<vector<int>> a(1001, vector<int>(1001));
vector<vector<string>> path(1001, vector<string>(1001));

int dy[] = {-1, 0, 0, 1},
    dx[] = {0, -1, 1, 0};

string getDirection(int num)
{
    if (num == 0)
    {
        return "U ";
    }
    else if (num == 1)
    {
        return "L ";
    }
    else if (num == 2)
    {
        return "R ";
    }
    
    return "D ";
}

bool bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});

    a[i][j] = 1;
    path[i][j] = "";

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
                path[i1][j1] = path[current.first][current.second] + getDirection(x);

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

    cin >> ay >> ax >> by >> bx;

    a[by][bx] = 2;

    cout << (bfs(ay, ax) ? path[by][bx] : "NO") << endl;

    return 0;
}
// 6 6
// 0 0 0 1 0 0
// 0 1 0 0 0 0
// 1 1 0 0 0 0
// 0 0 0 0 1 1
// 0 0 0 0 1 0
// 0 0 0 1 1 1
// 0 0
// 4 0