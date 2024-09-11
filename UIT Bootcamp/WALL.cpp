#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define MOD 1000000007

int n, m;

ll binarySearch(ll x, int n){
    int l = 0, r = n - 1;

    while(l <=r){
        int mid = l + (r - l)/2;
        if(mid == x) return mid;
        if(mid > x) r = mid - 1;
        else l = mid + 1;
    }

    return -1;
}

bool check(ll h){
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin>>n;
    ll a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    cin>>m;
    ll b[m];
    for(int i = 0;i<m;i++){
        cin>>b[i];
    }

    return 0;
}