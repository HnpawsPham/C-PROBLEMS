#include <bits/stdc++.h>
using namespace std;

int n, m;
const int maxn = 100001;
vector<vector<int>> a(maxn);
int color[maxn] = {-1};

bool dfs(int u, int parent)
{
    color[u] = 1 - color[parent];

    for (auto v : a[u])
    {
        if (color[v] == -1)
        {
            if (!dfs(v, u))
                return false;
        }
        else if (color[v] == color[u])
        {
            return false;
        }
    }
    return true;
}

bool bfs(int x)
{
    queue<int> q;
    q.push(x);
    color[x] = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : a[u])
        {
            if (color[v] == -1)
            {
                color[v] = 1 - color[u];
                q.push(v);
            }
            else if (color[v] == color[u])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        a[u].push_back(v);
        a[v].push_back(u);
    }

    bool res = true;
    color[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        if (color[i] == -1)
        {
            if (!bfs(i))
            {
                res = false;
                break;
            }
        }
    }

    cout << (res ? "YES" : "NO");

    return 0;
}

// 6 5
// 2 1
// 2 3
// 3 4
// 5 4
// 1 6