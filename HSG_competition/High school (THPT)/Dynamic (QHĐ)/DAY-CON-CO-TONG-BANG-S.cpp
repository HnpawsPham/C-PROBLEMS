#include <bits/stdc++.h>
using namespace std;

int n, s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> s;
    vector<int> a(n), dp(s + 1, 0);

    for(auto& x : a){
        cin>>x;
    }

    dp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = s; j >= a[i]; j--)
        {
            dp[j] += dp[j - a[i]];
        }
    }

    cout << dp[s] << endl;

    return 0;
}