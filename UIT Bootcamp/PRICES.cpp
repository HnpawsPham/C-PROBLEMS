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
    ll a[n];
    bool check[n] = {false};
    for(int i = 0;i<n;i++) cin>>a[i];

    int l = 0, r = 0, cnt = 0;
    ll t = a[0];
    while(cnt < n / 2){
        if(!check[l]){
            cout<<a[l]<<" ";
            cnt++;
            check[l] = 1;
            t = a[l] / 3 * 4;

            if(cnt >= n / 2 + 1) continue;

            while(true){
                if(!check[r] && a[r] == t){
                    check[r] = 1;
                    break;
                }
                r++;
            }
        }
        l++;
    }

    return 0;
}