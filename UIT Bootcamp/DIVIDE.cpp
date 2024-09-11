#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define MOD 1000000007

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    int a[n];
    ll sum = 0;

    for(int i = 0;i<n;i++) cin>>a[i];
    sort(a, a + n, greater<int>());
    for(int i = 0; i<n/2;i++){
        sum += a[i];
    }
    cout<<sum<<el;

    return 0;
}