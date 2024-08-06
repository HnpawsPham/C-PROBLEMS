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
    vector<ll> a(n);

    for (auto &x : a)
    {
        cin >> x;
    }

    ll cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[i - 1] && i > 0)
        {
            ll k = a[i - 1] - a[i];

            a[i] += k;
            cnt += k;
        }
    }

    cout << cnt << endl;

    return 0;
}