#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n;
const int maxn = (int)1e5 + 3;
ll a[8 * maxn];

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

void build(){
    for(int i = n; i<2*n;i++) cin>>a[i];
    for(int i = n - 1; i > 0; i--){
        a[i] = gcd(a[2 * i], a[2 * i + 1]);
    }
    return;
}

ll solve(int l, int r){
    ll res = 0;

    l += n;
    r += n;

    while(l <= r){
        if(l % 2 == 1){
            res = gcd(res, a[l]);
            l++;
        }
        if(r % 2 == 0){
            res = gcd(res, a[r]);
            r--;
        }
        r/=2; l/=2;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    build();

    ll pos = 1, maxx = 0;
    for(int i = 0;i<n;i++){
        ll left = (i > 0) ? solve(0, i - 1) : 0;
        ll right = (i < n - 1) ? solve(i + 1, n - 1) : 0;

        ll curr = gcd(left, right);
        if(curr > maxx){
            maxx = curr;
            pos = i + 1;
        }
    }
    cout<<pos<<" "<<maxx<<el;

    return 0;
}