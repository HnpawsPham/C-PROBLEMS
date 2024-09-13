#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n, q;
const int maxn = 100005;
ll a[4 * maxn];
ll b[4 * maxn];
int r[maxn], l[maxn];

void build(){
    for(int i = n; i < 2 * n; i++) cin>>a[i];
    for(int i = 0; i<n; i++) a[i] = max(a[2 * i], a[2 * i + 1]);
}

void update(int pos, ll val){
    int t = pos + n;
    a[t] = val;

    t/=2;
    while(t > 0){
        a[t] = max(a[2 * t], a[2 * t + 1]);
        t/=2;
    }
    return;
}

ll getmax(int l, int r){
    ll res = -LLONG_MAX;
    l +=n; r += n;

    while(l <= r){
        if(l % 2 == 1){
            res = max(res, a[l]);
            l++;
        }
        if(r % 2 == 0){
            res = max(res, a[r]);
            r--;
        }
        l/=2; r/=2;
    }
    return res;
}

void lazyUpdate(int pos, int l, int r){
    if(b[pos] == 0) return;
    a[pos] = max(b[pos], a[pos]);

    if(l != r){
        b[2 * pos] = max(b[2 * pos], b[pos]);
        b[2 * pos + 1] = max(b[2 * pos + 1], b[pos]);
    }

    b[pos] = 0;
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>q;
    build();
    memset(b, 0 , sizeof(b));

    for(int i = 0;i<q;i++){
        int t;
        cin>>t;
        if(t == 2){
            cin>>l[i]>>r[i];
            b[i] = 0;
            cout<<getmax(l[i] - 1, r[i] - 1)<<el;
        }
        else{ // 1
            int p;
            ll x;
            cin>>p>>x;
            l[i] = r[i] = -1;
            b[p] = x;       
            // update(p - 1, x);
        } 
    }
    return 0;
}