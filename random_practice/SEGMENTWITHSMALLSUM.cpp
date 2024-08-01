#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, s;

ll max(ll a, ll b){
    if(a > b){
        return a;
    }
    return b;
}

int main(){
    cin>>n>>s;
    
    vector<ll> a(n);

    for(auto& i : a){
        cin>>i;
    }

    ll l = 0, r = 0, maxlen = 0, sum = a[0];

    while(l < n && r < n){
        sum += a[r];

        while(sum > s){
            sum -= a[l];
            l++;
        }

        maxlen = max(maxlen, r - l + 1);

        r++;
    }

    cout<<maxlen<<endl;
}
