#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n;

fstream fi(".\\txt\\TroChoi.Inp");

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fi >> n;
    vector<ll> a(n);
    set<tuple<ll, ll, ll>> s;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        fi >> a[i];
    }

    if (n < 3)
    {
        cout << 0 << endl;
        return 0;
    }

    for (int l = 0; l + 2 < n; l++)
    {
        unordered_map<ll, ll> cnt;

        ll r = l + 1;
        cnt[a[l]]++;
        cnt[a[r]]++;

        ll maxap = 1;

        while (r < n)
        {
            cnt[a[r]]++;
            maxap = max(maxap, cnt[a[r]]);
            
            if (r - l + 1 >= 3)
            {
                if (a[r] != a[l] && cnt[a[r]] == 1 && cnt[a[l]] == 1)
                {
                    auto tp = make_tuple(a[l], a[(r + l) / 2], a[r]);
                    s.insert(tp);

                    if (maxap == 1)
                    {
                        for (int j = l + 1; j < r; j++)
                        {
                            auto tp = make_tuple(a[l], a[j], a[r]);
                            s.insert(tp);
                        }
                    }
                    // ans++;

                    // if (maxap == 1)
                    // {
                    //     ans += (r - l - 1);
                    // }
                }
            }

            r++;
        }
    }

    // for (auto x : s)
    // {
    //     ll a, b, c;
    //     tie(a, b, c) = x;

    //     cout << a << " " << b << " " << c << endl;
    // }

    cout << s.size()<< endl;

    return 0;
}
