#include <bits/stdc++.h>
using namespace std;

int n;
const int maxn = 10001;
int tree[4 * maxn];
int a[maxn];

// dinh goc la 1
void build(int node, int st, int en)
{
    if (st == en)
    {
        tree[node] = a[st];
        return;
    }

    int mid = (st + en) / 2;
    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, en);

    tree[node] = tree[2 * node] + tree[2 * node + 1];
    return;
}

int sum(int node, int st, int en, int l, int r)
{
    if (st > r || en < l)
    {
        return 0;
    }
    if (l <= st && r >= en)
    {
        return tree[node];
    }

    int mid = (st + en) / 2;
    int left = sum(2 * node, st, mid, l, r);
    int right = sum(2 * node + 1, mid + 1, en, l, r);

    return left + right;
}

void update(int node, int st, int en, int i, int val)
{
    if (st == en)
    {
        tree[node] = val;
        return;
    }

    int mid = (st + en) / 2;
    // index on the left side
    if (i <= mid)
    {
        update(2 * node, st, mid, i, val);
    }
    // index on the right side
    else
    {
        update(2 * node, mid + 1, en, i, val);
    }
    tree[node] = tree[2 * node] + tree[2 * node + 1];
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    build(1, 1, n);

    int q;
    cin>>q;
    while(q--){
        int l, r;
        cin>>l>>r;

        cout<<sum(1, 1, n, l, r)<<endl;;
    }

    return 0;
}