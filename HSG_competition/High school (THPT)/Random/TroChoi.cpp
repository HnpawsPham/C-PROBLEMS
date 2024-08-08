#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n;

fstream fi(".\\txt\\TroChoi.Inp");

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fi >> n;
    vector<ll> a(n);
    set<tuple<ll,ll,ll> > s;

    for (int i = 0; i < n; i++)
    {
        fi >> a[i];
    }

    if (n < 3)
    {
        cout << 0 << endl;
        return 0;
    }


    for(auto x : s){
        ll a, b, c;
        tie(a,b,c) = x;

        cout<<a<<" "<<b<<" "<<c<<endl;
    }

    cout << s.size() << endl;

    return 0;
}
