#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define pli pair<ll, int>

int n;

int main(){
    freopen(".\\txt\\BONG-TUYET.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    n*=n;
    ll a[n];
    unordered_map<ll, int> cnt;
    ll sum = 0;
    for(int i = 0; i<n;i++){
        cin>>a[i];
        cnt[a[i]]++;
        sum += a[i];
    }
    ll res= -1;
    for(pli x : cnt){
        res= max(res, sum - (x.first * x.second));
    }
    cout<<res<<el;

    return 0;
}