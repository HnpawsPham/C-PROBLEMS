#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n, q;
ll x = -LLONG_MAX;
const int maxn = 100005;
ll a[6 * maxn], b[maxn];
int r[maxn], l[maxn];

void build(){
    for(int i = n; i < 2 * n; i++) cin>>a[i];
    for(int i = 0; i<n; i++) a[i] = max(a[2 * i], a[2 * i + 1]);
}

void update(int pos, ll val){
    int t = pos + n;
    a[pos] = val;

    t/=2;
    while(t > 0){
        a[t] = max(a[2 * t], a[2 * t + 1]);
        t/=2;
    }
    return;
}

ll getmax(int l, int r){
    ll res = x;
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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>q;
    build();

    for(int i = 0;i<q;i++){
        int t;
        cin>>t;
        if(t == 2){
            cin>>l[i]>>r[i];
            b[i] = 0;
        }
        else{ // 1
            int p;
            cin>>p;
            l[i] = r[i] = -1;
            cin>>b[p];
        } 
    }

    for(int i = 0; i<q;i++){
        if(l[i] != -1) cout<<getmax(l[i], r[i])<<el;
        else{
            for(int i = l[i] - 1; i < r[i]; i++){
                x = max(x, b[i]);
            }
        }
    }
    return 0;
}