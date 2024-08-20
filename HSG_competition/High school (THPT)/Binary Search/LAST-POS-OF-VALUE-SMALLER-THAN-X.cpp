#include <bits/stdc++.h>
using namespace std;

int n, s;
vector<int> a(10001);

int binary_search(int x)
{
    int res = -1;

    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (a[mid] < x)
        {
            res = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> s;
    a.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int ans = binary_search(s);

    cout << (ans != -1 ? to_string(ans + 1) : "NO");
    return 0;
}