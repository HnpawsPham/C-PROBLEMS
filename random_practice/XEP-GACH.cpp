#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n, m;
ll res = -1;
const int maxn = (int)1e6 + 5;
vector<ll> a(maxn), b(maxn);

bool check(ll x){
    int i = 0, j = 0;
    ll minn = LLONG_MAX;

    while(i < n && j < m){
        if(a[i] < x){
            if(a[i] + b[j] >= x){
                minn = min(a[i] + b[j], minn);
                i++;
            }
            j++;
        }  
        else{
            minn = min(a[i], minn);
            i++;
        }
    }

    for(; i < n; i++) minn = min(minn, a[i]);

    if(minn >= x){
        res = minn;
        return true;
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin>>n>>m;
    ll mina = LLONG_MAX, maxb = -1;
    for(int i = 0;i<n;i++){
        cin>>a[i];
        mina = min(mina, a[i]);
    }
    for(int i = 0;i<m;i++){
        cin>>b[i];
        maxb = max(maxb, b[i]);
    }
    
    ll l = mina, r = mina + maxb;
    while(l <= r){
        ll mid = l + (r - l)/2;
        
        if(check(mid)){
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout<<res<<el;

    return 0;
}