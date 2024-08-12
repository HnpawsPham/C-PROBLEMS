#include <bits/stdc++.h>
using namespace std;
using ll  = long long;

fstream fi(".\\txt\\BOMCHUM.INP");

int n;

ll pt(ll num){
    ll sum = 0;

    for(int i = 2 ; i <= sqrt(num); i++){
        if(num % i == 0){
            sum += i;

            if(num / i != i){
                sum += num / i;
            }
        }
    }
    return sum + 1 + num;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    fi>>n;

    for(int i = 0; i < n; i++){
        ll x;
        fi>>x;

        cout<<pt(x)<<" ";
    }

    return 0;
}