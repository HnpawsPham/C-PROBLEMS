#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

ll cnt(ll x){
    ll res = 2;
    
    for(int i = 2; i<=sqrt(x);i++){
        if(x % i == 0){
            res += 2;
            if(i == x / i){
                res--;
            }
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    ll x;
    cin>>x;

    cout<<(cnt(x) > 2 || x < 2 ? "NO" : "YES")<<el;

    return 0;
}