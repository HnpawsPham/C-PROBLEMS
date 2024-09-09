#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

ll n;

bool check(ll x){
    int cnt[20];
    for(int i =0;i<20;i++){
        cnt[i] = 0;
    }
    while(x > 0){
        cnt[x % 10]++;
        if(cnt[x % 10] > 1){
            return false;
        }
        x/=10;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin>>n;
    ll cnt = 1;
    for(ll i = 2; 5 * i <= n; i++){
        if(check(5 * i)) cnt++;
    }
    cout<<cnt;

    return 0;
}