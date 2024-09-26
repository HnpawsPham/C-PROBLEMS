#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    ll a[n];
    vector<int> inc(n, 1), dec(n, 1);

    for(int i = 0;i<n;i++) cin>>a[i];

    for(int i = 1; i<n;i++){
        if(a[i] > a[i - 1]) inc[i] = inc[i - 1] + 1;
    }
    for(int i = n - 2; i >= 0;i--){
        if(a[i] > a[i + 1]) dec[i] = dec[i + 1] + 1;
    }
    int maxlen = 0;
    for(int i = 0;i<n;i++){
        maxlen = max(maxlen, 2 * min(inc[i], dec[i]) - 1);
    }
    cout<<maxlen<<el;

    return 0;
}