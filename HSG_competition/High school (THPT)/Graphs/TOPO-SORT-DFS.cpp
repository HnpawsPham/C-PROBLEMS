#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> a(10001);
vector<bool> check(10001, false);
deque<int> res;

void dfs(int u)
{
    check[u] = true;

    for (auto v : a[u])
    {
        if (!check[v])
        {
            dfs(v);
        }
    }

    res.push_front(u);
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
    }

    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
        {
            dfs(i);
        }
    }

    for (auto x : res)
    {
        cout << x << " ";
    }

    return 0;
}