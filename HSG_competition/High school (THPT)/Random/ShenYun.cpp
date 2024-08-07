#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n,x,y;

int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    cin>>n>>x>>y;

    int cnt = 0;
    ll bc = y;

    while(bc <= n){
        if(bc % x == 0){
            cnt++;
        }

        bc += y;
    }

    cout<<cnt<<endl;

    return 0;
}