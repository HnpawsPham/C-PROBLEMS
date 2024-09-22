#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n;

int main(){
    freopen(".\\txt\\FESTIVAL.INP" ,"r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    ll a[n];
    for(int i = 0; i<n;i++) cin>>a[i];
    
    vector<ll> inc(n, 1);
    vector<ll> dec(n, 1);
    sort(a, a + n);

    for(int i = 1; i<n;i++){
        if(a[i] > a[i - 1]){
            inc[i] = inc[i - 1] + 1;
        }
        inc[i] = max(inc[i], inc[i - 1]);
    }
    for(int i = n - 2; i>=0;i--){
        if(a[i] > a[i + 1]){
            dec[i] = dec[i + 1] + 1;
        }
        dec[i] = max(dec[i], dec[i + 1]);
    }
    ll maxlen = 0;
    for(int i = 0; i<n;i++){
        maxlen = max(maxlen, inc[i] + dec[i]);
    }
    cout<<maxlen<<el;

    return 0;
}