#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define MOD 1000000007

int n, k, node = 1;
const int maxn = (int)1e5 + 5;
ll a[4 * maxn];
ll res = 0;

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

void update(int i, ll val){
    int u = node + i;
    a[u] = val;
    u /= 2;
    while(u > 0){
        a[u] = gcd(a[2 * u], a[2 * u + 1]);
        u /= 2;
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;
    while(node < k) node *= 2;

    for(int i = 0; i< k;i++) cin>>a[node + i];

    for(int i = node - 1; i < 0; i--){
        a[i] = gcd(a[2 * i], a[2 * i + 1]);
    }

    res = a[1];
    for(int i = k; i<n;i++){
        ll x;
        cin>>x;
        update(i % k, x);

        res = max(res, a[1]);
    }
    cout<<res<<el;

    return 0;
}