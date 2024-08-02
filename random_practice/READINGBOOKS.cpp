#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n;

ll max(ll a, ll b){
    if(a > b){
        return a;
    }
    return b;
}

int main(){
    cin>>n;

    multiset<ll> a(n);
    ll cnt = 0;

    for(auto& x : a){
        cin>>x;
    }

    sort(a.begin(), a.end());

    cnt -= a[n-1];

    cout<<max(a[n-1] * 2, a[n-1] + cnt);

    return 0;
}