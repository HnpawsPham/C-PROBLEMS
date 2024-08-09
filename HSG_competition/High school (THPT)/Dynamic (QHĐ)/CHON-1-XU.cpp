#include <bits/stdc++.h>
using namespace std;

int n,s;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>s;
    vector<int> a(n);
    vector<vector<int> > dp(n + 1, vector<int>(s + 1));

    for(auto& x : a){
        cin>>x;
    }

    cout<<dp[0][0]<<endl;
    return 0;
}