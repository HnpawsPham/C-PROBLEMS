#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;

int main(){
    cin>>n;

    vector<ll> a(n + 1, 0);

    ll x;

    a[0] = 0;

    for(int i = 1; i <= n; i++){
        cin>>x;
        a[i] = a[i - 1] + x;
    }

    ll t;
    cin>>t;

    while(t--){
        ll l, r;
        cin>>l>>r;

        cout<<a[r] - a[l - 1]<<endl;
    }

    return 0;
}