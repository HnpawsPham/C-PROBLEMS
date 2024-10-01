#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;
#define el "\n"
#define MOD 1000000007

ll x;
const int maxn = 1000005;
bool check[maxn];

void sieve(){
    check[0] = check[1] = 1;
    for(int i = 2; i<sqrt(maxn); i++){
        if(!check[i]){
            for(int j = i + i; j < maxn; j += i){
                check[j] = 1;
            }
        }
    }
    return;
}

ll get(ll num){
    ll res = 0;
    while(num <= x){
        res += x/num;
        num*=num;
    }
    return res;
}

ll customPow(ll a, ll b){
    if(b == 0) return 1;
    ll res = customPow(a, b / 2);
    
    if(b % 2 == 0) return res * res % MOD;
    else return a * res * res % MOD;
}

void solve(){
    ll minsm = LLONG_MAX;
    int minnum = 2;
    ll res = get(2);

    minsm = min(minsm, res);
    res = customPow(2, res);

    for(int i = 3; i <= x; i+=2){
        if(check[i]) continue;

        ll sm = get(i);
        res = res * customPow(i, sm) % MOD;

        if(sm < minsm){
            minsm = sm;
            minnum = i;
        }
    }
    cout<<max(res / minnum, res / 2)<<el;
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin>>str;
    x = stoll(str.substr(0, str.length() - 1));
    solve();

    return 0;
}