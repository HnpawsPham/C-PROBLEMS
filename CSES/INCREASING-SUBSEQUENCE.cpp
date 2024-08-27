#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> dp;
    for (int i = 0; i < n; i++)
    {
        ll pos = lower_bound(dp.begin(), dp.end(), a[i]) - dp.begin();

        if(pos == dp.size()){
            dp.push_back(a[i]);
        }
        else{
            dp[pos] = a[i];
        }
    }

    cout << dp.size() << endl;

    return 0;
}