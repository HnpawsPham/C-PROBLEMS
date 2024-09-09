#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

int n;
const ll maxn = 1e7 + 1;
bool a[maxn];

void sieve(){
    a[0] = a[1] = true;

    for(ll i = 2; i<=sqrt(maxn); i++){
        if(!a[i]){
            for(int j = i + i; j <= maxn;j+=i){
                a[j] = true;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    sieve();
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        cout<<(!a[x] ? "YES" : "NO")<<el;
    }

    return 0;
}