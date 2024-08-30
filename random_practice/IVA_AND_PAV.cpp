#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pii pair<int, int>

int t;

int find(int p[], int st, int n, ll k)
{
    int l = st - 1, r = n - 1;
    int res = -1;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (p[mid] >= k)
        {
            res = max(res, mid + 1);
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return res;
}

void solve()
{
    int n, q;
    cin >> n;
    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> q;
    while (q--)
    {
        int l;
        ll k;
        cin >> l >> k;

        ll p[n];
        for (int i = l - 1; i < n; i++){
            p[i] = a[i];

            if (i > 0){
                p[i] &= p[i - 1];
            }
        }

        int r = find(p, l, n, k);
        cout << r << " ";
    }
    
    cout << endl;
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}