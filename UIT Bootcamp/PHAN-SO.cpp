#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

ll a, b;
ll gcdres;

ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return a * b / gcdres;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    cin>>a>>b;
    gcdres = gcd(a, b);
    cout<<gcdres<<" "<<lcm(a, b)<<el;
    
    return 0;
}