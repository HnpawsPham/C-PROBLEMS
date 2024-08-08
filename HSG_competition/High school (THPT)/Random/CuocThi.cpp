#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, t;

fstream fi(".\\txt\\Cuocthi.inp");

ll search(ll num, vector<ll>& a, ll mod1 , ll mod2){
    ll l = 0, r = a.size() - 1, mid;

    while(l <= r){
        mid = l + (r - l) / 2;

        if(a[mid] == num){
            return mid;
        } 

        if(a[mid] > num){
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    if(a[mid] < num){
        return mid + mod1;
    }
    return mid - mod2;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fi >> n >> t;

    vector<ll> a(n), res;

    ll x;

    for (int i = 0; i < n; i++)
    {
        fi >> a[i];
    }

    sort(a.begin(), a.end());

    while (t--)
    {
        ll l, r;
        fi >> l >> r;


        if(l > a[a.size() - 1]){
            res.push_back(0);
        }
        else{
            l = search(l, a, 1, 0);
            r = search(r, a, 0, 1);

            res.push_back(r - l + 1);
        }

        
    }

    for(auto x : res){
        cout<<x<<endl;
    }

    return 0;
}
