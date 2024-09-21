#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n;

int main(){
    freopen(".\\txt\\HANH-PHUC.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    int a[n + 1];
    ll p[n + 1];
    ll res = 0;

    p[0] = 0;
    for(int i =1;i<=n;i++){
        cin>>a[i];
        p[i] = a[i] + p[i - 1];
    }
    for(int i = 1; i < n;i++){
        res += a[i] * (p[n] - p[i]);
    }
    cout<<res<<el;

    return 0;
}