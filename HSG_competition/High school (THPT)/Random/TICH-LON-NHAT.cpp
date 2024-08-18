#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int>> a; // Vector lưu cặp (a[i], b[i])
vector<int> b;            // Mảng b[i]

bool check(int x)
{

    for (int i = 0; i < n; i++)
    {

        int l = i + 1, r = n - 1;
        int k = -1;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (a[i].first * a[mid].first >= x)
            {
                k = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
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
    int low = 0, high = INT_MAX, result = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (check(mid))
        {
            result = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return result;
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
    }

    for (int i = 0; i < n; i++)
    {
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