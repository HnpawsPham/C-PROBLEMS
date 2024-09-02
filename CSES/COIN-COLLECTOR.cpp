#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n";

int n, m;
const int maxn = 100001;
vector<vector<int>> a(maxn), sccs(maxn);
ll p[maxn], sccSum[maxn], dp[maxn];
int idx[maxn], low[maxn], sccId[maxn];
bool check[maxn] = {false};
stack<int> q;
int id = 0, sccCnt = 0;

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
        else if (check[v])
        {
            low[u] = min(low[u], idx[v]);
        }
    }

    if (idx[u] == low[u])
    {
        sccCnt++;

        ll sum = 0;
        while (true)
        {
            int v = q.top();
            q.pop();

            sum += p[v];
            check[v] = false;
            sccId[v] = sccCnt;

            if (v == u) break;
        }
        sccSum[sccCnt] = sum;
    }
    return;
}

ll getMax(int u)
{
    if (dp[u] != -1) return dp[u];

    dp[u] = sccSum[u];
    for (int v : sccs[u])
    {
        dp[u] = max(dp[u], getMax(v) + sccSum[u]);
    }

    return dp[u];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> p[i];
    
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

    for (int u = 1; u <= n; u++)
    {
        for (int v : a[u])
        {
            if (sccId[v] == sccId[u]) continue;
            sccs[sccId[u]].push_back(sccId[v]);
        }
    }
    memset(dp, -1, sizeof(dp));

    ll res = 0;
    for (int i = 1; i <= sccCnt; i++)
    {
        res = max(res, getMax(i));
    }
    cout << res << el;

    return 0;
}