#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    int a[n];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    vector<bool> dp(sum + 1, false);
    dp[0] = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = sum; j >= a[i]; j--)
        {
            if (dp[j - a[i]])
            {
                dp[j] = true;
            }
        }
    }

    vector<int> res;

    for (int j = 1; j <= sum; j++)
    {
        if (dp[j])
        {
            res.push_back(j);
        }
    }

    cout << res.size() << endl;

    for (auto x : res)
    {
        cout << x << " ";
    }

    return 0;
}