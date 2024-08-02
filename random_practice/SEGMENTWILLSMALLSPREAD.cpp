#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, k;

ll max(ll a, ll b){
    if(a > b){
        return a;
    }
    return b;
}

ll min(ll a, ll b){
    if(a < b){
        return a;
    }
    return b;
}

int main(){
    cin>>n>>k;

    vector<ll> a(n);

    for(auto& x : a){
        cin>>x;
    }

    multiset<ll> ms;

    ll l = 0, r = 0, res = 0;

    while(r < n){
        ms.insert(a[r]);
        
        while(*ms.rbegin() - *ms.begin() > k){
            auto it = ms.find(a[l]);
            ms.erase(it);

            l++;
        }

        res += r - l + 1;

        r++;
    }

    cout<<res<<endl;

    return 0;
}