#include <bits/stdc++.h>
#include <string>
using namespace std;
using ll  = long long;
#define MOD 1000000009;

fstream fi(".\\txt\\PO.INP");

int n, s, q;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    fi>>n>>s;
    fi>>q;
    vector<int> a(n), dp(s + 1, 0);

    for(auto& x : a){
        fi>>x;
    }

    int maxw = 0;
    dp[0] = 1;

    for(int i = 0; i<n;i++){
        for(int j = s; j >= a[i]; j--){
            
            dp[j] += dp[j - a[i]];

            if(dp[j] > 0){
                maxw = max(maxw, j);
            }
        }
    }

    cout<<maxw<<endl;
    
    if(q > 1){
        cout<<dp[maxw]<<endl;
    }
    

    return 0;
}