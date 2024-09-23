#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define MOD 1000000007

int n, m;

bool check(ll x){
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin>>n;
    ll a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    ll b[m];
    for(int i = 0;i<m;i++){
        cin>>b[i];
    }
    
    ll l = 1, r = (ll)1e8 + 5, res = -1;
    while(l <= r){
        ll mid = l + (r - l)/2;

        if(check(mid)){
            l = mid + 1;
            res = mid;
        }
        else r = mid - 1;
    }

    return 0;
}