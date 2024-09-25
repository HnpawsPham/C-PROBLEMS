#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n, q;
const int maxn = (ll)1e5 * 4 + 5;
ll a[maxn];

void buildSeg(){
    for(int i = n; i < 2 * n; i++)
        cin>>a[i];
    for(int i = n - 1; i >= 0; i--)
        a[i] = max(a[2 * i], a[2 * i + 1]);
    return;
}

void updateSeg(int pos, ll val){
    int t = pos + n;
    a[t] = val;
    t/=2;

    while(t > 0){
        a[t] = max(a[2 * t], a[2 * t + 1]);
        t/=2;
    }
    return;
}

ll getSeg(int l, int r){
    ll res = 0;
    while(l <= r){
        if(l % 2 == 1){
            res = max(res, a[l]);
            l++;
        }
        if(r % 2 == 0){
            res = max(res, a[r]);
            r--;
        }
        l/=2;
        r/=2;
    }
    return res;
}

void updateFen(int i){
    while(i <= n){
        
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>q;
    buildSeg();

    while(q--){
        int t; cin>>t;
        if(t == 1){
            int p; ll x;
            cin>>p>>x;
        }
        else{
            int u, v;
            cin>>u>>v;
        }
    }

    return 0;
}