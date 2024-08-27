#include <bits/stdc++.h>
using namespace std;

string str, s;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> str >> s;

    int n = str.length();
    int m = s.length();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX));
    dp[0][0] = 0;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i != 0)
            {
                dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
            }

            if (j != 0)
            {
                dp[i][j] = min(dp[i][j], dp[i][j - 1] + 1);
            }

            if (i != 0 && j != 0)
            {
                dp[i][j] = min(dp[i][j], dp[i - 1][j - 1] + (str[i - 1] != s[j - 1]));
            }
        }
    }

    cout << dp[n][m] << endl;

    return 0;
}