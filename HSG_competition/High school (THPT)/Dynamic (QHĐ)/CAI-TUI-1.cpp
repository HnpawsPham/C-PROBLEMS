#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

int n, s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> s;
    vector<ll> w(n + 1), v(n + 1);
    vector<ll> dp(s + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }

    for(int i = 1;i<=n;i++){
        for(int j = s; j >= w[i];j--){
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }

    cout<<dp[s]<<endl;

    return 0;
}