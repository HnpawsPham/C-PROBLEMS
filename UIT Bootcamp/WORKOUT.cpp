#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll s;
    cin>>s;
    if(s == 0){
        cout<<0<<el;
        return 0;
    }
    ll x = ceil(sqrt(s));
    ll y = x;
    if(x * ( y - 1) >= s) y--;
    cout<<x + y<<el;
    return 0;
}