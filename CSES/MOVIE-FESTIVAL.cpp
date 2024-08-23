#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pii pair<int, int>

int n;

bool compare(pii a, pii b)
{
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    pii a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    sort(a, a + n, compare);

    int lastEnd = 0, cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i].first >= lastEnd)
        {
            cnt++;
            lastEnd = a[i].second;
        }
    }

    cout << cnt << endl;

    return 0;
}