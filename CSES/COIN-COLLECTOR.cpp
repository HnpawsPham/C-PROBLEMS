#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;
const int maxn = 100001;
vector<vector<int>> a(maxn);
ll p[maxn];
int idx[maxn], low[maxn];
bool check[maxn] = {false};
int id = 0;
ll res;
stack<int> q;

void dfs(int u)
{
    q.push(u);
    idx[u] = low[u] = id++;
    check[u] = true;

    for (int v : a[u])
    {
        if (idx[v] == -1)
        {
            dfs(v);
            low[u] = min(low[u], low[v]);
        }
        else if (check[u])
        {
            low[u] = min(low[u], idx[v]);
        }
    }

    if (idx[u] == low[u])
    {
        ll sum = 0;
        while (true)
        {
            int v = q.top();
            q.pop();

            sum += p[v];

            check[v] = false;
            low[v] = idx[u];

            if (v == u)
                break;
        }
        res = max(res, sum);
    }
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
    }

    memset(idx, -1, sizeof(idx));

    for (int i = 1; i <= n; i++)
    {
        if (idx[i] == -1)
        {
            dfs(i);
        }
    }

    cout << res << "\n";

    return 0;
}