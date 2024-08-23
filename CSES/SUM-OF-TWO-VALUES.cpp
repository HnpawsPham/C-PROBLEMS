#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pli pair<ll, int>

int n;
ll x;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> x;
    pli a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    int l = 0, r = n - 1;

    sort(a, a + n);

    while (l < r)
    {
        int sum = a[l].first + a[r].first;

        if (sum == x)
        {
            cout << a[l].second << " " << a[r].second << endl;
            return 0;
        }

        if (sum > x)
        {
            while (a[r].first == a[r - 1].first && r < n)
            {
                r--;
            }
            r--;
        }
        else
        {
            while (a[l].first == a[l + 1].first && l < r)
            {
                l++;
            }
            l++;
        }
    }
    
    cout << "IMPOSSIBLE" << endl;

    return 0;
}