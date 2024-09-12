#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = unsigned long long;

ll a, b, ra, rb, n;

ll check(ll x){
    return a * (x - x / ra) + b * (x - x / rb);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>a>>ra>>b>>rb>>n;
    if(a >= n || b >= n || a + b >= n){
        cout<<1<<el;
        return 0;
    }

    ll l = 0, r = n / min(a, b);
    ll res = LLONG_MAX;

    while (l <= r)
    {
        ll mid = l + (r - l)/2;

        if(check(mid) >= n){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout<<res<<el;
    
    return 0;
}