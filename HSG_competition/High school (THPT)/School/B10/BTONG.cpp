#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define el "\n"

int n;

int main(){
    freopen(".\\txt\\BTONG.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    ll a[n];
    for(int i = 0; i<n;i++) cin>>a[i];
    sort(a, a + n);
    cout<<a[0] + a[1]<<el;
    return 0;
}