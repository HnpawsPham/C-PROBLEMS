#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define MOD 1000000007

ll n, k, a, b;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    std::cout.tie(0);

    cin>>n>>k>>a>>b;
    ll res = 0, cntk = 0, k1 = k;
    n -= 1;

    if(k == 1){
        std::cout<<n * a<<el;
        return 0;
    }

    if(n % k == 0){
        std::cout<<n / k * b<<el;
        return 0;
    };

    while(k < n){
        cntk++;
        k += k1;
    }
    res = cntk * b + (n - cntk) * a;
    std::cout<<res<<el;

    return 0;
}