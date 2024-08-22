#include <bits/stdc++.h>
using namespace std;

int n, m, stt = 0, cnt = 0;
vector<vector<int>> a(10001);
vector<int> index(10001), low(10001);
stack<int> path;
vector<bool> onStack(10001, false);

void dfs(int u)
{
    path.push(u);
    onStack[u] = true;
    index[u] = low[u] = stt++;

    for (auto v : a[u])
    {
        if (index[v] == 0)
        {
            dfs(v);

            low[u] = min(low[u], low[v]);
        }
        else if (onStack[v])
        { // meet parent
            low[u] = min(low[u], index[v]);
        }
    }

    if (index[u] == low[u])
    {
        while (true)
        {
            int v = path.top();
            path.pop();

            onStack[v] = false;
            low[v] = index[u]; // avoid duplicate

            if (v == u)
            {
                break;
            }
        }

        cnt++;
    }
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
    }

    for (int i = 1; i <= n; i++)
    {
        if (index[i] == 0)
        {
            dfs(i);
        }
    }

    cout << (cnt == 1 ? "STRONG" : "WEAK") << endl;

    return 0;
}