#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n, k;
const int maxn = 4005;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;
    int a[n + 1];
    for(int i = 1; i<=n;i++) cin>>a[i];

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, maxn));
    int res = maxn;
    
    for(int i = 0; i<=n;i++) dp[1][i] = 0;

    for(int i = 2; i <= n;i++){
        for(int j = 1; j<=k;j++){
            if(i - j <= 0) continue;
            int cur = abs(a[i] - a[i - j]);
            dp[i][cur] = min(dp[i][cur], dp[i - j][cur] + 1);
        }

        for(int x = n; x >=0;x--){
            if(x > n) dp[i][x] = min(dp[i][x + 1], dp[i][x]);
        }
    }

    for(int i = 0; i<=n;i++){
        res = min(res, dp[n][i]);
    }

    cout<<(res != maxn ? res : -1)<<el;
    return 0;
}