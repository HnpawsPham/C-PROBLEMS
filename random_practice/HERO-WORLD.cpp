#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int t;

void solve()
{
    int n;
    ll x;
    cin >> n >> x;
    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    int res = 0, pos = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for(int j =pos;j>=0;j--){
            if(x >= a[j] / i + (a[j] % i != 0)){
                pos = j;
                break;
            }
        }
        res++;
    }

    cout << res << endl;
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}