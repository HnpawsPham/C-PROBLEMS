#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pii pair<int, int>

struct line
{
    int u, v;
    ll w;

    line(int u1, int v1, ll w1) : u(u1), v(v1), w(w1) {};
};

int n, m;
const int maxn = 10001;
vector<vector<pii>> a(maxn);
bool check[maxn] = {false};
int parent[maxn];
vector<ll> minw(maxn, LLONG_MAX);

void prim(int x)
{
    vector<line> mst;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, x});
    ll res = 0;

    while (!pq.empty())
    {
        pii curr = pq.top();
        pq.pop();

        int u = curr.second;
        int w = curr.first;

        if (check[u])
            continue;

        res += w;
        check[u] = true;

        if (u != x)
        {
            mst.push_back({parent[u], u, w});
        }

        for (pii x : a[u])
        {
            int w1 = x.second;
            int v = x.first;

            if (!check[v] && w1 < minw[v])
            {
                parent[v] = u;
                minw[v] = w1;
                pq.push({w1, v});
            }
        }
    }

    cout << res << endl;
    for (auto l : mst)
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