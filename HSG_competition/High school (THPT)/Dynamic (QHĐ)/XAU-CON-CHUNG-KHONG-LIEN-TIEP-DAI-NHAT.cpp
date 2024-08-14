#include <bits/stdc++.h>
using namespace std;

string str1, str2;
vector<vector<int>> dp(3003, vector<int>(3003, 0));

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> str1 >> str2;

    str1 = "0" + str1;
    str2 = "0" + str2;

    int res = 0;

    for (int i = 1; i < str1.length(); i++)
    {
        for (int j = 1; j < str2.length(); j++)
        {
            if (str1[i] == str2[j])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else{
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
            
            res = max(res, dp[i][j]);
        }
    }

    cout << res << endl;

    return 0;
}