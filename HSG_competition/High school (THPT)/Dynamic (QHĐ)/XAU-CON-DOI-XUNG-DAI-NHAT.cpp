#include <bits/stdc++.h>
using namespace std;

string str;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> str;
    int n = str.length();
    vector<vector<bool> > dp(n, vector<bool>(n, false));

    int maxlen = 0;

    for (int len = 1; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;

            if(len == 1 || (len == 2 && str[i] == str[j])){
                dp[i][j] = true;
            }
            else{
                dp[i][j] = (dp[i + 1][j - 1] && str[i] == str[j]);
            }

            if(dp[i][j]){
                maxlen = max(maxlen, len);
            }
        }
    }

    cout<<maxlen<<endl;

    return 0;
}