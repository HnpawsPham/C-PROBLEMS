#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define MOD 1000000007

int n;

ll max(ll a, ll b){
    if(a > b) return a;
    return b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    ll res = 0;
    ll a[n], b[n];
    for(int i = 0;i<n;i++) cin>>a[i];
    for(int i = 0;i<n;i++) cin>>b[i];
    sort(a, a + n);
    sort(b, b + n);

    for(int i = 0;i<n;i++){
        res = max(res, abs(a[i] - b[i]));
    }
    cout<<res<<el;
    return 0;
}