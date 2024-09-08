#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;
#define el "\n"

ll pt(int x){
    ll cnt = 0;
    
    if(x % 5 == 0){
        while(x % 5 == 0){
            x/=2;
            cnt++;
        }
    }

    for(int i =3;i>=2;i--){
        if(x % i == 0){
            while(x % i == 0){
                x/=i;
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    freopen(".\\txt\\DONGNUOC.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin>>n;
    cout<<pt(n)<<el;

    return 0;
}