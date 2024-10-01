#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n;
const int maxn = 30005;
vector<vector<int>> a(maxn);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    int maxr = 0;
    for(int i = 0; i<n;i++){
        int l, r;
        cin>>l>>r;
        a[r].push_back(l);
        maxr = max(maxr, r);
    }

    int dp[maxr + 5];
    dp[0] = 0;

    for(int r = 1; r<=maxr; r++){
        dp[r] = dp[r - 1];
        for(int l : a[r]){
            dp[r] = max(dp[r], r - l + dp[l]);
        }
    }
    cout<<dp[maxr]<<el;

    return 0;
}