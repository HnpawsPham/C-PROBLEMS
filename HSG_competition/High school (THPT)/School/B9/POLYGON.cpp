#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long int;
#define el "\n"
#define MOD 1000000007

int n;
const int maxn = 4005;
ll p[maxn][maxn];

void build (){
    for(int i = 1; i<=n + 1;i++){
        p[1][i] = p[i][i] = 1;
        for(int j = 1; j<i;j++){
            p[i][j] = (p[i - 1][j] + p[i - 1][j - 1]) % MOD;
        }
    }
    return;
}

int main(){
    freopen(".\\txt\\POLYGON.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    int a[n];
    vector<int> cnt(maxn, 0);
    int maxa = -1;
    for(int i = 0;i<n;i++) {
        cin>>a[i];
        cnt[a[i]]++;
        maxa = max(maxa, a[i]);
    }
    build();
    ll res = 0;
    for(int i = 1; i<=maxa;i++){
        if(cnt[i] > 3)
        for(int j = 4; j <= cnt[i] + 1;j++){
            res = (res + p[cnt[i] + 1][j]) % MOD;
        }
    }
    cout<<res<<el;

    return 0;
}