#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

ll n, m;

int main(){
    freopen(".\\txt\\LOC-NUOC.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    if(m < n) swap(m, n);
    int a[n], r[n];
    for(int i = 0; i<n;i++) cin>>a[i];
    for(int i = 0; i<n;i++) cin>>r[i];

    int sum;

    for(int i = 0; i<n;i++){
        sum = 0;
        for(int j = 0; j<n;j++){
            int t = min(a[j], r[i]);
            sum += t;
            a[j] -= t;
        }
        if(sum == 0) break;
        cout<<sum<<" ";
    }

    return 0;
}