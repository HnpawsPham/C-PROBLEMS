#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;
#define el "\n"
const ll MOD = 1e9 + 7;

ll ppow(ll a, ll b){
    ll res = 1;
    while(b){
        if(b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>=1;
    }
    return res;
}

ll k;
int main(){
    freopen(".\\txt\\PHAN-DU.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>k;
    int m = to_string(k).length();

    ll x = (ppow(10, m) - 1) / 9;
    while(true){
        for(int i = 1; i<=9;i++){
            ll num = x * i;
            if(num % k == 0){
                cout<<(num / k) % MOD<<el;
                return 0;
            }
        }
        x = x * 10 + 1;
    }
    return 0;
}