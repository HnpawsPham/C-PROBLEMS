#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define pii pair<int, int>

int n, k;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;
    vector<int> a(n + 1);
    unordered_map<int, int> mp;

    int res = INT_MAX;
    
    for(int i = 1; i<=n;i++){
        cin>>a[i];
        if(mp[a[i]] == 0) mp[a[i]] = i;
    }
    for(int i = 1; i<=n;i++){
        // cout<<a[i]<<" "<<mp[a[i]] + k<<" "<<i<<el;
        if(mp[a[i]] + k > i && i!= mp[a[i]]) res = min(res, a[i]);
        else mp[a[i]] = i;
    }   
    if(res == INT_MAX) cout<<-1<<el;
    else cout<<res<<el;

    return 0;
}