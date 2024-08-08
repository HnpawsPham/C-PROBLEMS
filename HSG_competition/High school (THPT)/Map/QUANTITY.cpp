#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int t;

int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    cin>>t;
    vector<ll> res;

    while(t--){
        int n;
        cin>>n;

        map<ll,ll> a;

        for(int i =0;i<n;i++){
            ll x;
            cin>>x;

            a.insert({x, 0});
        }

        res.push_back(a.size());
    }

    for(auto x : res){
        cout<<x<<endl;
    }
}