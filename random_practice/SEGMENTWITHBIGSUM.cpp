#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, s;

ll min(ll a, ll b){
    if(a < b){
        return a;
    }
    return b;
}

int main(){
    cin>>n>>s;

    vector<ll> a(n);

    for(auto& x : a){
        cin>>x;
    }

    ll l = 0, r = 0, minlen = n, sum = 0;
    bool isValid = false;

    while(r < n && l < n){
        sum += a[r];
        
        while(sum - a[l] >= s){
            sum -= a[l];
            l++;
        }

        if(sum >= s){
            isValid = true;
            minlen = min(minlen, r - l + 1);
        }

        r++;
    }

    if(!isValid){
        cout<<-1<<endl;
        return 0;
    }

    cout<<minlen<<endl;
}