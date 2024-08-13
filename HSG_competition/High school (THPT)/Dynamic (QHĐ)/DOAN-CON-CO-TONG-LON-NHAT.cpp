#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    vector<ll>a(n);

    ll s = 0, res = -1e18, mins = 1e18;

    for(int i = 0; i < n; i++){
        cin>>a[i];

        s += a[i];
        res = max(res, s - mins);
        mins = min(mins, s);
    }

    cout<<res<<endl;

    return 0;
}