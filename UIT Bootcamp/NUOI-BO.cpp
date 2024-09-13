#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n;
const int maxn = 20;
ll a[maxn];
int res;

void solve(int i, ll sum1, ll sum2, int x) {
    if (i == n) {
        if (sum1 == sum2) {
            res = min(res, x);
        }
        return;
    }
    solve(i + 1, sum1 + a[i], sum2, x);
    solve(i + 1, sum1, sum2 + a[i], x);
    solve(i + 1, sum1, sum2, x + 1);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    res = n;
    solve(0, 0, 0, 0);
    cout << res << el;

    return 0;
}
