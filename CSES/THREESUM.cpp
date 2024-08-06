#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, k;

int main()
{
    cin >> n >> k;

    vector<pair<ll, ll>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    ll l = 0, r = n - 1;
    ll sum = 0;

    for (int i = 0; i < n - 2; i++)
    {
        if (i == 0 || a[i].first != a[i - 1].first)
        {
            l = i + 1;
            r = n - 1;

            while (l < r)
            {
                sum = a[i].first + a[l].first + a[r].first;

                if (sum == k)
                {
                    cout << a[i].second << " " << a[l].second << " " << a[r].second << endl;
                    return 0;
                }

                else if (sum > k)
                {
                    r--;
                }
                else
                {
                    l++;
                }
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
