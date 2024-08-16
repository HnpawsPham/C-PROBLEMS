#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> a(10001);
vector<bool> check(10001, false);

int bfs(int u)
{
    queue<int> q;
    q.push(u);

    while (!q.empty())
    {
        int v = q.front();
        q.pop();

        for (auto x : a[v])
        {
            if (!check[x])
            {
                q.push(x);
            }
        }

        check[v] = true;
    }
}

bool kt_lienthong(int n)
{
    int res = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!check[i])
        {

            if(res > 1){
                return false;
            }
            res++;

            bfs(i);
        }
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
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

    cout<<kt_lienthong(n);
    return 0;
}