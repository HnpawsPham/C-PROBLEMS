#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<ll> a(n);
    for(ll &x : a) cin>>x;

    vector<int> parent(n), dp(n, 1);

    int ans = 0;
    int st = -1;

    for(int i = 0; i<n;i++){
        parent[i] = i;
        for(int j = 0; j<i;j++){
            if(a[j] < a[i] && dp[j] + 1 > dp[i]){
                dp[i] = dp[j] + 1;
                parent[i] = j;
            }
        }
        if(dp[i] > ans){
            ans = dp[i];
            st = i;
        }
    }
    cout<<ans<<el;

    deque<ll> res;
    res.push_front(a[st]);
    while(st != parent[st]){
        st = parent[st];
        res.push_front(a[st]);
    }
   
    for(ll x : res) cout<<x<<" ";
    cout<<el;
    return 0;
}
