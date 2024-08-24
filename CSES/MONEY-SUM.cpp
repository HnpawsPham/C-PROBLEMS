#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007;

int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    int a[n];
    int dp[2005] = {0};

    for(int i=1;i<=n;i++){
        cin>>a[i];    
    }

    dp[a[1]] = a[1];
    int sum = a[0];

    for(int i =2;i<=n;i++){
        
    }

    for(int i=1;i<=2000; i++){
        if(dp[i] > 0){
            cout<<dp[i]<<" ";
        }
    }
    
    return 0;
}