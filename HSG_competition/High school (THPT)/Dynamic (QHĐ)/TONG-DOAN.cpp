#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<ll> a(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];

        a[i] += a[i - 1];
    }

    int t;
    cin>>t;

    while(t--){
        int l,r;
        cin>>l>>r;

        cout<<a[r] - a[l - 1]<<endl;
    }

    return 0;
}