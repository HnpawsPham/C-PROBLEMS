#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int t;

ll max(ll a, ll b){
    if(a>b){
        return a;
    }
    return b;
}

int main()
{
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        map<ll, ll> a;
        ll maxlen = 0;

        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;

            a[x]++;
            maxlen = max(maxlen, a[x]);
        }
        
        pair<ll,ll> res;

        for(auto x : a){
            if(x.second == maxlen){
                res = x;
                break;
            }
        }

        cout<<res.first<<" "<<res.second<<endl;
    }

    return 0;
}