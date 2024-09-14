#include <bits/stdc++.h>
using namespace std;
#define el "\n"
using ll = long long;

ll n;
ll k;
int a[25];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;
    a[0] = n;
    for(int i = 1; i<23; i++){
        a[i] = (a[i - 1] % 10)*100 + a[i - 1]/10;
    }
    int ans = (k < 23 ? a[k] : a[20 + (k - 20) % 3]);
    cout<<ans<<el;

    return 0;
}