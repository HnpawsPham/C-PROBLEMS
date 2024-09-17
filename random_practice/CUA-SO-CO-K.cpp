#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n, k;

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    cin>>n>>k;
    int a[n + 1], p[n + 1];
    p[0] = 0;
    for(int i = 1; i <= n;i++){
        cin>>a[i];
        p[i] = a[i] + p[i - 1];
    }
    for(int i = k; i<=n;i++){
        cout<<p[i] - p[i - k]<<" ";
    }
    cout<<el;

    return 0;
}