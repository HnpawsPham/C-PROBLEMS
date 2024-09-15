#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int t;

ll solve(ll i, ll j){
    if(i >= j){
        if(i % 2 == 0) return i*i - j + 1;
        else return (i - 1)*(i - 1) + j;
    }
    else{
        if(j % 2 == 0) return (j - 1)*(j - 1) + i;
        else return j*j - i + 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>t;

    while(t--){
        ll x, y;
        cin>>y>>x;
        cout<<solve(y, x)<<el;
    }

    return 0;
}