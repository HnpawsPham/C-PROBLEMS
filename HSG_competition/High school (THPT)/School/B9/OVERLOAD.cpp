#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n, m;

int main(){
    freopen(".\\txt\\OVERLOAD.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    ll a[n], b[m];

    for(int i = 0;i<n;i++) cin>>a[i];
    for(int i = 0;i<m;i++) cin>>b[i];
    
    sort(a, a + n);
    sort(b, b + m);

    ll delta = 0;
    vector<int> res(n, -1);

    for(int i = 0; i<m;i++){
        int pos = lower_bound(a, a + n, b[i]) - a;
        if(pos != n && a[pos] == b[i]){
            res[pos] = i + 1;
            a[pos] = -1;
            b[i] = -1;
        }
    }
    for(int i = n; i>=0;i--){
        if(a[i] == -1) continue;
        int pos = lower_bound(b, b + m, a[i]) - b;
        if(pos != m){
            res[i] = pos + 1;
            b[pos] = -1;
            a[i] = -1;
        }
    }
    for(int x : res) cout<<x<<el;
    return 0;
}