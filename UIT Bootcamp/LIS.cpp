#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    ll a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> dp;
    vector<int> parent(n, -1), b;

    for (int i = 0; i < n; i++) {
        ll pos = lower_bound(dp.begin(), dp.end(), a[i]) - dp.begin();

        if (pos == dp.size()) {
            dp.push_back(a[i]);
            if (!dp.empty()) {
                parent[i] = b.empty() ? -1 : b.back();
            }
            b.push_back(i);
        } else {
            dp[pos] = a[i];
            parent[i] = pos > 0 ? b[pos - 1] : -1;
            b[pos] = i;
        }
    }

    vector<ll> res;
    int x = b.back();
    while (x != -1) {
        res.push_back(a[x]);
        x = parent[x];
    }
    reverse(res.begin(), res.end());

    cout << res.size() << el;
    for (ll x : res) {
        cout << x << " ";
    }

    return 0;
}
