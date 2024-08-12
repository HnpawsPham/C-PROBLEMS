#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int t;
vector<vector<int>> dp(1005, vector<int>(1005));

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>t;

    // PASCAL TRIANGLE
    dp[0][0] = 1;

    for(int i = 1; i <= 1000; i++){
        dp[i][i] = dp[i][0] = 1;
        
        for(int j = 1; j < i; j++){
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;
        }
    }

    while(t--){
        int n, k;
        cin>>n>>k;

        cout << dp[n][k] << endl;
    }

    return 0;
}