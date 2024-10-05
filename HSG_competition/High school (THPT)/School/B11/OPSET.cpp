#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n";
#define MOD 1000000007

ll n, k, d;

int main(){
    freopen(".\\txt\\OPSET.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k>>d;
    bool a[n + 1] = {0};
    for(int i = 1; i<=k;i++){
        ll x;
        cin>>x;
        a[x] = 1;
    }

    int i = 1, len = 0, t = 0;
    vector<ll> res;

    while(i + t <= n){
        if(!a[i + t]){
            res.push_back(i + t);
            i += t;
            t = d + 1;
            len++;
    
        } else t++;
    }

    int m = res.size();
    ll cnt = (m > 0);

    // idea: dem so luong ptu tu res[i] den (n - res[i]) / (d + 1)
    for(int i = 1; i < m - 1;i++){
        int t = 1;
        while(res[i + 1] - (res[i] + t) > d){
            t++;
            cnt++;
        }
    }
    cout<<len<<el;
    cout<<cnt<<el;

    return 0;
}