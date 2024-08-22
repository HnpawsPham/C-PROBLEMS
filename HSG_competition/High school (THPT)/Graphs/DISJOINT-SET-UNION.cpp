#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> parent(10001), psize(10001, 0l);

void makeSet()
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        psize[i]++;
    }

    return;
}

int find(int x)
{
    if (x == parent[x])
    {
        return x;
    }

    return parent[x] = find(parent[x]);
}

void unionSet(int a, int b)
{
    a = find(a);
    b = find(b);

    if (a != b)
    {
        if (psize[a] < psize[b])
        {
            swap(a, b);
        }

        parent[b] = a;
        psize[b] += psize[a];
    }

    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    makeSet();

    int t, m;
    cin >> t;

    while (t--)
    {
        int i, j;
        cin >> i >> j;

        unionSet(i, j);
    }

    cin >> m;
    for (int i = 1; i <= n; i++)
    {
        if (find(i) == m)
        {
            cout << i << " ";
        }
    }

    return 0;
}

// 6
// 3
// 1 2
// 2 5
// 2 3
// 1