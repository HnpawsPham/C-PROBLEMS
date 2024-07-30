#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n;
vector<int> a;

// CHECK SNT
bool prime(ll num){
    for(int i = 2; i < sqrt(num); i++){
        if(num % i == 0){
            return false;
        }
    }

    return true;
}

// TIM SO 
int solve(){
    for(int i = 33; i >= 2; i--){
        ll x = pow(2,i) - 1;

        if(x < n){
            if(prime(i)){
                if(prime(x)){
                    cout<<x;
                    break;
                }
            }
        }
    }
}

int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    cin>>n;

    solve();
}
