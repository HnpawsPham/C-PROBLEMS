#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, x;

int main(){
    cin>>n>>x;

    vector< pair<ll, ll> > a(n);

    ll t;

    for(int i = 0; i< n; i++){
        cin>>a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    ll l = 0, r = n-1;
    
    while(l < r){

        if(a[r].first + a[l].first == x){
            cout<<a[l].second<<" "<<a[r].second<<endl;
            return 0;
        }
        
        if(a[l].first + a[r].first > x){
            r--;
        }
        else{
            l++;
        }
        
    }

    cout<<"IMPOSSIBLE"<<endl;
}