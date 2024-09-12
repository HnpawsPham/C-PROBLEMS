#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n, k;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;
    int a[n + 1], dp[n + 1];
    for(int i = 1; i<=n;i++) cin>>a[i];

    dp[1] = 0;

    for(int i = 2; i <= n;i++){
        dp[i] = INT_MAX;

        for(int j = 1; j <= k;j++){
            if(i - j > 0)
                dp[i] = min(dp[i], dp[i - j] + abs(a[i - j] - a[i]));
        }
    }
    cout<<dp[n]<<el;

    return 0;
}