#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    ll a[n];
    int cnt1 = 0;
    ll maxx = 0;
    for(int i = 0; i<n;i++){
        cin>>a[i];
        cnt1 += (a[i] == 1);
    }
    cout<<n - cnt1 + 1<<el;

    return 0;
}

// de check
// int n;
//     cin>>n;
//     vector<int> a(n);
//     for(int &x : a) cin>>x;
//     sort(a.rbegin(), a.rend());
    
//     int ans = n;
//     for(int i =0; i<n;i++) ans = min(ans, i + a[i]);
//     cout<<ans<<el;