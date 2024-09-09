#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int t;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin>>t;
    while(t--){
        int n; cin>>n;
        ll p1[n + 1], p2[n + 1];
        p1[0] = p2[0] = 0;


        for(int i = 1;i<=n;i++){
            ll x;
            cin>>x;
            p1[i] = p2[i] = 0;

            if(i % 2 == 0){
                p1[i] = x + p1[i - 1];
                p2[i] += p2[i - 1];
            }
            else{
                p2[i] = x + p2[i - 1];
                p1[i] += p1[i - 1];
            }
        }

        int mid = n / 2;
        int isEven = (n % 2 == 0 ? 1 : 0);
        ll res = - LLONG_MAX;

        res = max(p2[mid + 1 + isEven], p2[n] - p2[mid - 1 - isEven]);
        res = max(res, max(p1[mid + 1 + isEven], p1[n] - p1[mid - 1 - isEven]));
        res = max(res, max(p1[n], p2[n]));

        cout<<res<<el;
    }

    return 0;
}