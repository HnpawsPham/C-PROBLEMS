#include <bits/stdc++.h>
using namespace std;

int n, maxv;
vector<pair<int, int>> a; 
vector<int> b;

bool check(int x)
{
    for (int i = 0; i < n; i++)
    {

        int l = i + 1, r = n - 1;
        int k = -1;

        while (l <= r)
        {
            int j = (l + r) / 2;

            if (a[i].first * a[j].first >= x)
            {
                k = j;
                r = j - 1;
            }
            else
            {
                l = j + 1;
            }
        }

        if (k == -1)
            continue;

        int maxb = *max_element(b.begin() + k, b.end());

        if (b[i] * maxb >= x)
        {
            return true;
        }
    }

    return false;
}

int solve()
{
    int l = 0, r = maxv * maxv, res = 0;

    while (l <= r)
    {
        int x = (l + r) / 2;
        if (check(x))
        {
            res = x;
            l = x + 1;
        }
        else
        {
            r = x - 1;
        }
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    a.resize(n);
    b.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        maxv = max(maxv, a[i].first);
    }

    for (int i = 0; i < n; i++)
    {
        maxv = max(maxv, b[i]);
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        a[i].second = b[i];
    }

    sort(a.begin(), a.end());

    cout << solve() << endl;

    return 0;
}

// 4
// 1 4 7 9
// 6 5 4 1