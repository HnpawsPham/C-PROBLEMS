#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int n, s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> s;
    vector<int> a(n);
    vector<int> dp(s + 1, 0);

    for (auto &x : a)
    {
        cin >> x;
    }

    dp[0] = 1;

    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[j] <= i){
                dp[i] = (dp[i] + dp[i - a[j]]) % MOD;
            }
        }
    }

    cout << dp[s] << endl;
    return 0;
}