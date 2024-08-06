#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,t;

ll min(ll a, ll b){
    if(a < b){
        return a;
    }
    return b;
}

int main(){
    cin>>n>>t;

    vector<ll> a(n), res;

    for(auto &x : a){
        cin>>x;
    }

    while(t--){
        ll minn = 1e10;
        int l,r;
        cin>>l>>r;

        for(int i = l - 1; i < r; i++){
            minn = min(minn, a[i]);
        }

        res.push_back(minn);
    }

    for(auto x : res){
        cout<<x<<endl;
    }

    return 0;
}