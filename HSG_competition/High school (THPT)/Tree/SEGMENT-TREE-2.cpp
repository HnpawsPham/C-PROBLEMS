#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n, node = 1;
const int maxn = (int)1e5 + 3;
ll a[maxn * 4];

void build(){
    for(int i = node - 1; i>0;i--){
        a[i] = a[2 * i] + a[2 * i + 1];
    }
    return;
}

void update(int pos, ll val){
    int t = node + pos;
    a[t] = val;
    t /= 2;
    while(t > 0){
        a[t] = a[2 * t] + a[2 * t + 1];
        t/=2;
    }
    return;
}

ll sum(int l, int r){
    ll res = 0;

    l += node;
    r += node;

    while(l <= r){
        if(l % 2 == 1){
            res += a[l];
            l++;
        }
        if(r % 2 == 0){
            res += a[r];
            r--;
        }
        r/=2;
        l/=2;
    }

    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    while(node < n) node *= 2;

    for(int i = 0; i< n; i++){
        cin>>a[i + node];
    }

    build();

    return 0;
}