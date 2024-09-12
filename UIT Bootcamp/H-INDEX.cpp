#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    int a[n];
    int res = 0;

    for(int i = 0; i<n;i++){
        cin>>a[i];
    }
    sort(a, a + n, greater<int>());

    for(int i = 0; i<n;i++){
       if(a[i] < i + 1) break;
       res = i + 1;
    }

    cout<<res<<el;
    return 0;
}