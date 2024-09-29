#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n;

vector<int> get_lis(ll a[], int n){
    vector<int> dp;
    vector<int> inc(n, 0);
    for(int i = 0; i<n;i++){
        int pos = lower_bound(dp.begin(), dp.end(), a[i]) - dp.begin();

        if(pos == dp.size()){
            dp.push_back(a[i]);
            inc[i] = dp.size();
        }
        else{
            inc[i] += inc[pos];
            dp[pos] = a[i];
        }
    }
    return inc;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    ll a[n];
    for(int i = 0;i<n;i++) cin>>a[i];

    vector<int> inc = get_lis(a, n);

    for(int i = 0; i<n/2;i++){
        swap(a[i], a[n - i - 1]);
    }

    vector<int> dec = get_lis(a, n);

    int maxlen = 0;
    for(int i = 0;i<n;i++){
        maxlen = max(maxlen, 2 * min(inc[i], dec[n - i - 1]) - 1);
    }
    cout<<maxlen<<el;

    return 0;
}