#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define MOD 1000000007
#define pll pair<ll, ll>

const int maxn = (int)1e5 + 5;
ll ta[4 * maxn], tb[4 * maxn];
ll a[maxn], b[maxn], t[4 * maxn];
int n, m, win1 = 0, win2 = 0, node = 1;

void build(int node, int st, int en){
    if(st == 0){
        t[node] = a[st];
        return;
    }

    int mid = st + (en - st) / 2;
    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, en);
    t[node] = t[2*node] + t[2 * node + 1];

    return;
}

ll sum(int node, int st, int en, int l, int r){
    if(st < l || en < st) return 0;
    if(st >= l && en <= r) return a[node];

    int mid = (st + en)/ 2;
    ll left = sum(2 * node, st, mid, l, r);
    ll right = sum(2 * node + 1, mid + 1, en, l, r);

    return left + right;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    ll res = 0;
    while(node < n) node *= 2;

    for(int i = 0;i<n;i++) cin>>a[i];
    for(int i = 0;i<n;i++) cin>>b[i];
    while(m--){
        int p, q;
        cin>>p>>q;
        res = max(res, sum(1, 0, n, p, q));
    }
    
    cout<<win1<<" "<<win2<<el;
    return 0;
}