#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;

struct line
{
    int u, v;
    ll w;

    line(int u1, int v1, ll w1) : u(u1), v(v1), w(w1) {};
};

vector<line> a;
const int maxn = 1000001;
int parent[maxn], sz[maxn];

void makeSet()
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        sz[i] = 1;
    }
}

int find(int x)
{
    if (x == parent[x])
    {
        return x;
    }

    return parent[x] = find(parent[x]);
}

bool unionSet(int a, int b)
{
    a = find(a);
    b = find(b);

    if (a == b)
        return false;

    if (sz[a] < sz[b])
    {
        swap(a, b);
    }

    parent[b] = a;
    sz[a] += sz[b];

    return true;
}

bool compare(line a, line b)
{
    return a.w < b.w;
}

void kruskal()
{
    int cnt = 0;
    sort(a.begin(), a.end(), compare);
    ll d = 0;

    for (int i = 0; i < m; i++)
    {
        if (cnt == n - 1)
            break;

        if (unionSet(a[i].u, a[i].v))
        {
            d += a[i].w;
            cnt++;
        }
    }

    if (cnt != n - 1)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    cout << d << endl;
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
        ll w;
        cin >> u >> v >> w;

        a.push_back({u, v, w});
    }

    makeSet();
    kruskal();

    return 0;
}