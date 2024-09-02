#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

ll n;

ll ngto(int x){
    for(ll i = 2; i<=sqrt(x);i++){
        if(x % i == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    ll sum = n;
    while(n > 1){
        int res = ngto(n);
        if(res != -1){
            n /= res;
        }
        else{
            n = 1;
        }
        sum += n;
    }
    cout<<sum<<el;
    return 0;
}