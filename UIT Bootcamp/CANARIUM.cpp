#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

int t;

ll get_res(ll m){
    return (2 * m - 2 * m * m) / (2 * m + 1) - 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>t;
    while(t--){
        ll k;
        cin>>k;

        ll m = -1, minn = LLONG_MAX;
        for(int x = 1; x * x <= k; x++){
            if(get_res(x) < minn){
                minn = get_res(x);
                m = x;
            }
        }
        cout<<minn<<" "<<m<<el;
    }
    
    return 0;
}