#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pii pair<int, int>

struct line
{
    int u, v;
    ll w;
};

int n, m;
const int maxn = 10001;
vector<vector<pii>> a(maxn);
bool inMST[maxn] = {false};
int parent[maxn];
ll mind[maxn] = {LLONG_MAX};

void prim(int x)
{
    vector<line> mst;
    ll res = 0;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, x});

    for (int i = 1; i <= n; i++)
    {
        mind[i] = LLONG_MAX;
    }

    while (!q.empty())
    {
        pii top = q.top();
        q.pop();

        ll w = top.first;
        int u = top.second;

        if (inMST[u])
            continue;

        res += w;
        inMST[u] = true;

        if (u != x)
        {
            mst.push_back({parent[u], u, w});
        }

        for (pii curr : a[u])
        {
            int v = curr.first;
            ll w1 = curr.second;

            if (!inMST[v] && w1 < mind[v])
            {
                q.push({w1, v});
                mind[v] = w1;
                parent[v] = u;
            }
        }
    }

    cout << res << endl;
    for (line l : mst)
    {
        cout << l.u << " " << l.v << " " << l.w << endl;
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
        ll w;
        cin >> u >> v >> w;

        a[u].push_back({v, w});
        a[v].push_back({u, w});
    }

    prim(1);

    return 0;
}

// 6 8
// 1 2 9
// 1 3 4
// 2 3 1
// 2 4 6
// 3 5 2
// 4 5 3
// 4 6 10
// 5 6 8