#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,t;

int main(){
    cin>>n>>t;

    vector<ll> a(n + 1), res;

    ll x;

    for(int i = 1; i<=n; i++){
        cin>>x;
        a[i] = a[i - 1] + x;
    }

    while(t--){
        int l,r;
        cin>>l>>r;

        res.push_back(a[r] - a[l - 1]);
    }

    for(auto x : res){
        cout<<x<<endl;
    }

    return 0;
}