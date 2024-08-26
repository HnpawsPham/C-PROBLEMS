#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;

int main()
{
    freopen (".\\txt\\GIAODICH.INP", "r", stdin);
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    int a[n];
    ll res = -LLONG_MAX, minn = LLONG_MAX, sum = 0;

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    for(int i = 0;i<n;i++){
        sum += a[i];
        minn = min(minn, sum);
        res = max(res, sum);
    }

    cout<<res-minn<<endl;
    return 0;
}