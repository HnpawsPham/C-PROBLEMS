#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m;

int main()
{
    cin >> n >> m;

    vector<vector<ll>> a(n + 1, vector<ll>(m + 1));

    ll x;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> x;

            a[i][j] = a[i - 1][j] + a[i][j - 1] - a[i - 1][j - 1] + x;
        }
    }

    int t;
    cin >> t;

    while (t--)
    {
        ll c1, c2, r1, r2;

        cin >> r1 >> r2 >> c1 >> c2;

        cout << (a[r2][c2] - a[r1 - 1][c2] - a[r2][c1 - 1] + a[r1 - 1][c1 - 1]) << endl;
    }

    return 0;
}