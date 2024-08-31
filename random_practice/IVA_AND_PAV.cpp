#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int t;

void build(int node, int st, int en, ll a[], ll tree[]){
    if(st == en){
        tree[node] = a[st];
        return;
    }

    int mid = (st + en) / 2;
    build(2 * node, st, mid, a, tree);
    build(2 * node + 1, mid + 1, en, a, tree);

    tree[node] = tree[2 * node] & tree[2 * node + 1];
    return;
}

ll sum(int node, int st, int en, int l, int r, ll a[], ll tree[]){
    if(l > en || r < st){
        return -1;
    }
    if(st >= l && en <= r){
        return tree[node];
    }

    int mid = (st + en) / 2;
    ll left = sum(2 * node, st, mid, l, r, a, tree);
    ll right = sum(2 * node + 1, mid + 1, en, l, r, a, tree);

    return left & right;
}

ll find(int node, int st, int en, int l , int k, ll curr, ll a[], ll tree[]){
    if(st > en || en < l){
        return -1;
    }
    if(st == en){
        return ((curr & tree[node]) >= k ? st : -1);
    }

    int mid = (st + en) / 2;
    ll left = sum(2 * node, st, mid, l, mid, a, tree);

    if((curr & left) >= k){
        int right = find(2 * node + 1, mid + 1, en, l, k, curr & left, a, tree);
        return(right != -1 ? right : mid);
    }

    return find(2 * node, st, mid, l, k, curr, a, tree);
}

void solve()
{
    int n, q;
    cin >> n;
    ll a[n + 1];
    ll tree[4 * n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    build(1, 1, n, a, tree); 

    cin>>q;
    while(q--){
        int l;
        ll k;
        cin>>l>>k;
        cout<<find(1, 1, n, l, k, a[l], a, tree)<<" ";
    }

    cout << endl;
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}