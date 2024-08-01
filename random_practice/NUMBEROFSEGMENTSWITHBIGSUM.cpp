#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, s, cnt = 0;

int main(){
    cin>>n>>s;

    vector<ll> a(n);

    for(auto& x : a){
        cin>>x;
    }

    ll l = 0, r = 0, sum = 0;

    while(r < n){
        sum+= a[r];

        while(sum >= s){
            sum -= a[l];
            l++;
            cnt+= n - r;
        }

        r++;
    }

    cout<<cnt;
}