#include <bits/stdc++.h>
using namespace std;

struct line
{
    int u, v, w;

    line(int u1, int v1, int w1) : u(u1), v(v1), w(w1) {};
};

int n, m;
vector<line> a;
vector<int> parent(10001), psize(10001, 0);

void makeSet()
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        psize[i]++;
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
    {
        return false;
    }

    if (psize[a] < psize[b])
    {
        swap(a, b);
    }

    parent[b] = a;
    psize[a] += psize[b];

    return true;
}

bool compare(line a, line b)
{
    return a.w < b.w;
}

void kruskal()
{
    vector<line> mst;
    int msize = 0;

    sort(a.begin(), a.end(), compare);

    for (int i = 0; i < m; i++)
    {
        if (mst.size() == n - 1)
        {
            break;
        }

        if (unionSet(a[i].u, a[i].v))
        {
            mst.push_back(a[i]);
            msize += a[i].w;
        }
    }

    if (mst.size() != n - 1)
    {
        cout << "NO";
        return;
    }

    cout << msize << endl;

    for (auto l : mst)
    {
        cout << l.u << " " << l.v << " " << l.w << endl;
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
        int u, v, w;
        cin >> u >> v >> w;

        line l(u, v, w);
        a.push_back(l);
    }

    makeSet();
    kruskal();

    return 0;
}

// 6 9
// 1 2 12
// 1 3 4
// 2 4 5
// 2 5 3
// 3 5 2
// 4 5 3
// 4 6 10
// 5 6 8
// 2 3 1