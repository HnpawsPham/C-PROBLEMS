#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define MOD 1000000007

ll customPow(ll a, ll b){
    ll res = 1;
    while(b > 0){
        if(b % 2 == 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b/=2;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll a, b;
    cin>>a>>b;
    cout<<customPow(a, b)<<el;

    return 0;
}