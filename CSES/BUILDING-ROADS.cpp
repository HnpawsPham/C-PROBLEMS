#include <bits/stdc++.h>
using namespace std;

int n, m;
const int maxn = 100001;
bool check[maxn] = {false};
vector<vector<int>> a(maxn);

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

    return;
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

    vector<int> res;
    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
        {
            dfs(i);
            res.push_back(i);
        }
    }

    cout << res.size() - 1 << endl;
    for (int i = 0; i < res.size() - 1; i++)
    {
        cout << res[i] << " " << res[i + 1] << endl;
    }
    return 0;
}