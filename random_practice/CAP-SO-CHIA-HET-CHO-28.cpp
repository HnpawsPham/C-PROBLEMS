#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    ll a[n];
    ll cnt[29];
    memset(cnt, 0, sizeof(cnt));

    for(int i = 0; i<n;i++){
        cin>>a[i];
        cnt[a[i] % 28]++;
    }

    ll res = 0;
    res += (cnt[0] * (cnt[0] - 1))/2;
    res += (cnt[14] * (cnt[14] - 1))/2;
    for(int i = 1; i < 14;i++){
        res += (cnt[i] * cnt[28 - i]);
    }
    cout<<res<<el;

    return 0;
}