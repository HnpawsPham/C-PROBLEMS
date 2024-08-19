#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> a(10001);
vector<int> in(10001, 0), res;
vector<bool> check(10001, false);

void kahn()
{
    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        if (in[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int v = q.front();
        q.pop();

        res.push_back(v);

        for (auto x : a[v])
        {
            in[x]--;

            if (in[x] == 0)
            {
                q.push(x);
            }
        }
    }
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
        in[v]++;
    }

    kahn();

    for (auto x : res)
    {
        cout << x << " ";
    }

    return 0;
}