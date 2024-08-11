#include <bits/stdc++.h>
using namespace std;

int n,s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>s;
    vector<int> a(n + 1);

    for(int i = 1; i <= n; i++){
        cin>>a[i];
    }

    vector<vector<int> > dp(n + 1, vector<int>(s + 1, INT_MAX));
    dp[0][0] = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= s; j++){
            if(a[i] <= j && dp[i][j - a[i]] != INT_MAX){
                dp[i][j] = dp[i][j - a[i]] + 1;
            }
            
            dp[i][j] = min(dp[i][j], dp[i - 1][j]);
        }
    }

    cout<<((dp[n][s] == INT_MAX) ? -1 : dp[n][s])<<endl;

    return 0;
}