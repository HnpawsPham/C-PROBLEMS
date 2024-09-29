#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

int t;

ll get_res(ll m, ll k){
    ll t1 = 2 * k - 2 * m * m;
    ll t2 = 2 * m + 1;
    if(t1 % t2 == 0) return t1 / t2 -1;
    else return LLONG_MAX;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>t;
    while(t--){
        ll k;
        cin>>k;

        ll m = -1, delta = LLONG_MAX;
        for(ll x = 1; x * x < k; x++){
            ll res = get_res(x, k);
            if(res < delta){
                delta = res;
                m = x;
            }
        }
        if(delta == LLONG_MAX || m == -1){
            cout<<"-1 -1"<<el;
        }
        else cout<<m<<" "<<m + delta<<el;
    }
    
    return 0;
}