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
    vector<ll> a(n);
    for(int i = 0; i<n;i++){
        cin>>a[i];
    }
    
    ll res = 0;
    int l = 0, r = n - 1;
    while(l <= r){
        if(l == 0){
            l++;
            continue;
        }
        if(r == n-1){
            r--;
            continue;
        }

        if(a[l] <= a[l - 1]){
            res += (a[l - 1] - a[l] + 1);
            a[l] += (a[l - 1] - a[l] + 1);
        } l++;
        if(a[r + 1] >= a[r]){
            res += (a[r + 1] - a[r] + 1);
            a[r] += (a[r + 1] - a[r] + 1);
        } r--;
        cout<<l<<" "<<r<<el;
    }
    cout<<res<<el;

    return 0;
}