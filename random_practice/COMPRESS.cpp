#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll a, b, sum = 0;

int donen(ll num){
    ll i = 2;
    int cnt = 0;

    while(num > 2){
        if(num % i != 0){
            num = i;
            i = 1;
            cnt++;
        }
        i++;
    }

    return cnt;
}

int main(){
    cin>>a>>b;

    for(ll i = a; i < b; i++){
        sum += donen(i);
    }

    cout<<sum<<endl;
}