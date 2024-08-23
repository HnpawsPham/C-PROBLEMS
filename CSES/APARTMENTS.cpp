#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, m, k, cnt;
ll a[(ll)2e5 + 1], b[(ll)2e5 + 1];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= k)
        {
            cnt++;
            i++;
            j++;
        }
        else
        {
            if(b[j] < a[i] - k)
            {
                j++;
            }
            else
            {
                i++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}