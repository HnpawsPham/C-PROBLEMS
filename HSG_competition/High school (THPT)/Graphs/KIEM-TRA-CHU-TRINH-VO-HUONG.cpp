#include <bits/stdc++.h>
using namespace std;

int n, m, x = 0, y = 0;
vector<vector<int>> a(10001);
vector<bool> check(10001);
vector<int> parent(10001);

bool bfs(int u)
{
    queue<int> q;
    q.push(u);

    check[u] = true;
    parent[u] = 0;

    while (!q.empty())
    {
        int v = q.front();
        q.pop();

        for (auto t : a[v])
        {
            if (!check[t])
            {
                q.push(t);

                check[t] = true;
                parent[t] = v;
            }
            else if (t != parent[v])
            {
                return true;
            }
        }
    }

    return false;
}

bool dfs(int u)
{
    check[u] = true;

    for (auto v : a[u])
    {
        if (v == y)
        {
            continue;
        }

        if (!check[v])
        {
            parent[v] = u;

            if (dfs(v))
            {
                return true;
            }
        }
        else if (v != parent[u])
        {
            x = v;
            y = u;

            check[v] = true;

            return true;
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

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;

        a[u].push_back(v);
        a[v].push_back(u);
    }

    bool hasCycle = false;

    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
        {
            if (dfs(i))
            {
                if (!hasCycle)
                {
                    hasCycle = true;
                    cout << "YES" << endl;
                }

                deque<int> cycle;

                while (y != x)
                {
                    cycle.push_front(y);
                    y = parent[y];
                }

                cycle.push_front(x);
                cycle.push_back(x);

                for (auto x : cycle)
                {
                    cout << x << " ";
                }
                cout << endl;
            }
        }
    }

    if (!hasCycle)
    {
        cout << "NO" << endl;
    }

    return 0;
}

// 8 6
// 1 2
// 2 3
// 4 5
// 4 6
// 5 6
// 5 7