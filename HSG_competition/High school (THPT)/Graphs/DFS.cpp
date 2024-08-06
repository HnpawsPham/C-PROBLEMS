#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll m, n;

void dfs(ll u, vector<bool>& check, const vector<vector<ll>>& a) {
    cout << u << " ";

    check[u] = true;

    for (auto v : a[u]) {
        if (!check[v]) {
            dfs(v, check, a);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    vector<vector<ll>> a(n + 1);
    vector<bool> check(n + 1, false);

    for (int i = 0; i < m; i++) {
        ll u, v;
        cin >> u >> v;

        a[u].push_back(v);
        a[v].push_back(u);
    }

    dfs(1, check, a);

    return 0;
}
