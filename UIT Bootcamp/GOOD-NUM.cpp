#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define MOD 1000000007

ll n, m;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    int digit = to_string(n).length();
    
    ll step = 1;
    for(int i = 0; i<digit; i++){
        step *= 10;
    }

    ll cnt = 0;
    for(ll i = n; i <= m; i += step){
        cnt++;
    }
    cout<<cnt<<el;

    return 0;
}