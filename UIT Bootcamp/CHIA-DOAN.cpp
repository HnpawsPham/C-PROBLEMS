#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n, k;
const int maxn = 5005;
ll a[maxn], b[maxn];

ll f(int l, int r){
    return abs(a[r] - b[l]) + abs(a[l]- b[r]);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin>>n>>k;
    for(int i = 1; i<=n;i++) cin>>a[i];
    for(int i = 1; i<=n;i++) cin>>b[i];

    ll dp[n + 1][n + 1];

    for(int i = 1;i<=n;i++)
        for(int j = 1; j <= k; j++){
            dp[i][j] = 0;
            for(int x = i; x >= 1; x--)
                dp[i][j] = max(dp[i][j], dp[x - 1][j - x + 1]);
        }
    cout<<dp[n][n];
    return 0;
}