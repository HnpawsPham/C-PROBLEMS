#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using ll = long long;
#define el "\n"

ll a, b;
const ll maxn = 20000005;
bool arr[maxn];

void sieve(){
    arr[0] = arr[1] = 1;
    for(ll i = 2; i < maxn;i++){
        if(!arr[i]){
            for(ll j = i * i; j < maxn; j+=i){
                arr[j] = 1;
            }
        }
    }

    for(ll i = a + b + 1; i < maxn;i++){
        if(!arr[i]){
            cout<<i-a-b<<el;
            return;
        }
    }
    return;
}

int main(){
    freopen(".\\txt\\MAY-MAN.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>a>>b;
    sieve();
    return 0;
}