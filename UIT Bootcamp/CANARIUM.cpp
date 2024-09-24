#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

int t;

ll get_n(ll m, ll k){
    ll res = -1;
    ll l = 0, r = m - 1;
    while(l <= r){
        ll mid = l + (r - l)/2;

        if(mid * m + (mid + 1)*(m + 1) == 2*k){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>t;
    while(t--){
        ll k;
        cin>>k;

        ll l = 1, r = (ll)sqrt(k);
        ll n = -1, m = -1;
        bool ok = false;

        while(l <= r){
            ll mid = l + (r - l)/2;

            ll res = get_n(mid, k);
            if(res != -1){
                r = mid - 1;
                m = mid;
                n = res;
            }        
            else l = mid + 1;
        }

        cout<<m<<" "<<n<<el;
    }
    
    return 0;
}