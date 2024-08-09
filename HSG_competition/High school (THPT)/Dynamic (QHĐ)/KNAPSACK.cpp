#include <bits/stdc++.h>
using namespace std;

int n, s;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> s;
    vector<int> a(n), w(n), v(n);
    vector<vector<int>> dp(n + 1, vector<int>(s + 1));

    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;

        a.push_back(x);
        w.push_back(y);
        v.push_back(z);
    }

    cout << dp[0][0] << endl;
    return 0;
}