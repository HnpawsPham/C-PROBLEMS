#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n;

bool condit(int l, int r, bool dup){
    if(dup) return l <= r;
    else return l < r;
}

// O(n)
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    vector<ll> a(n);
    bool dup = false;
    for(ll &x : a) cin>>x;
    for(int i = 0; i<n;i++){
        if(i > 0 && i < n - 1 && a[i - 1] >= a[i] && a[i] <= a[i + 1]) dup = true;
    }
    
    ll res = 0;
    int l = 0, r = n - 1;
    while(condit(l, r, dup)){
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
        }
        if(a[r + 1] >= a[r]){
            res += (a[r + 1] - a[r] + 1);
            a[r] += (a[r + 1] - a[r] + 1);
        }
        l++;
        r--;
    }
    cout<<res<<el;

    return 0;
}