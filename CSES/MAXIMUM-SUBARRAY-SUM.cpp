#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    ll sum = 0, minn = LLONG_MAX, res = -LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;

        res = max(res, sum - (i > 0 ? minn : 0));
        minn = min(min(minn, sum), (ll) 0);
    }
    cout << res << endl;

    return 0;
}