#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n";
#define MOD 1000000007

ll n, k, d;
const int maxn = (ll) 1e7 + 5;
int fw[maxn] = {0};

void update(int i){
    while(i > 0){
        i -= (i & -i);
        fw[i]++;
    }
    return;
}

ll sum(int i){
    ll res = 0;

    while(i <= n){
        res += fw[i];
        i += (i & -i);
    }

    return res;
}

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
        update(x);
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

    for(int i = 0; i<=n;i++){
        cout<<fw[i]<<" ";
    }
    cout<<el;
    for(int i = 1; i < m - 1;i++){
        cnt += ((n - res[i]) / (d + 1) - (abs(sum(res[i]) - sum(res[i + 1]))));
    }
    cout<<len<<el;
    cout<<cnt<<el;

    return 0;
}