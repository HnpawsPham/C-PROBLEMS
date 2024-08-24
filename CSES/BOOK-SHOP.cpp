#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int n, x;
int s[1001], p[1001];
int dp[1001][100001] = {0};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            dp[i][j] += dp[i - 1][j];

            if (s[i] <= j)
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - s[i]] + p[i]);
            }
        }
    }

    cout << dp[n][x] << endl;

    return 0;
}