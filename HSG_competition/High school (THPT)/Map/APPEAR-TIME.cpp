#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;

int main()
{
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    map<ll, ll> a;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
    }

    for (auto x : a)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}