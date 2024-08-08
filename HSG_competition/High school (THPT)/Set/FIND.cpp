#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int t;

int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    cin>>t;
    vector<string> res;

    while(t--){
        int n, q;
        cin>>n;

        set<ll> a;

        for(int i =0;i<n;i++){
            ll x;
            cin>>x;
            
            a.insert(x);
        }

        cin>>q;

        while(q--){
            ll qi;
            cin>>qi;

            if(a.count(qi) != 0){
                res.push_back("YES");
            }
            else{
                res.push_back("NO");
            }
        }
    }

    for(auto x : res){
        cout<<x<<endl;
    }
}