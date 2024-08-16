#include <bits/stdc++.h>
using namespace std;

int n, m;

int bfs(int u, vector<bool> &check, const vector<vector<int>> &a)
{
    queue<int> q;
    q.push(u);

    check[u] = true;

    while (!q.empty())
    {
        int v = q.front();
        q.pop();

        cout << v << " ";
        for (auto x : a[v])
        {
            if (!check[x])
            {
                q.push(x);
                check[x] = true;
            }
        }
    }

    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    vector<vector<int>> a(n + 1);
    vector<bool> check(n + 1, false);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        a[u].push_back(v);
        a[v].push_back(u);
    }

    bfs(1, check, a);

    return 0;
}