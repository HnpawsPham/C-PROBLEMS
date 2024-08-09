#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    vector<ll> a(n), cnt(n, 1);

    for (auto &x : a)
    {
        cin >> x;
    }

    ll maxlen = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
            {
                cnt[i] = max(cnt[i], cnt[j] + 1);
            }
        }

        maxlen = max(cnt[i], maxlen);
    }

    cout << maxlen << endl;
    return 0;
}