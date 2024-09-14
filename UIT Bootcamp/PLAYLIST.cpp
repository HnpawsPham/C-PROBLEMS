#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define MOD 1000000007

int n;
ll k;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin>>n>>k;
    vector<ll> a(n);
    ll max1 = 0, max2 = 0;
    for(ll &x : a) cin>>x;

    if(n == 1){
        int t = 0;
        if(k < n){
            t = (n - k) * (n - k -1)/2;
        }
        cout<<a[0] * (a[0] - 1) / 2 + a[0] - t<<el;
        return 0;
    }

    sort(a.rbegin(), a.rend());
    max1 = a[0];
    max2 = a[1];
    ll res = (max1 + max2) * (k / 2);
    k %= 2;
    int t = 0;
    while(k > 0){
        res += a[t];
        t = abs(t - 1);
        k--;
    }
    cout<<res<<el;

    return 0;
}