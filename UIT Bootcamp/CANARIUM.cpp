#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

int t;

bool check(ll n, ll m, ll k){
    return (n * m + (n + 1)*(m + 1) == 2*k);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        ll n;
        for(int m = sqrt(k) ; m > 0; m-=2){
            if(check(n, m, k)) cout<<n<<" "<<m<<el;
        }
    }

    return 0;
}