#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int m,n, sum = 0;

int solve(){
    cin>>n>>m;

    vector<ll> a(n), b(m);

    for(auto& x : a){
        cin>>x;
    }

    for(auto& x : b){
        cin>>x;
    }

    int i = 0, j = 0;

    while(i < n && j < m){
        if(a[i] < b[j]){
            i++;
        }
        
        if(b[j] < a[i]){
            j++;
        }

        int cnt1 = 0, cnt2 = 1;
        while(a[i] == b[j]){
            cnt1++;
            i++;
        }

        while(j < m - 1 && b[j] == b[j + 1]){
            cnt2++;
            j++;
        }

        sum+= cnt1 * cnt2;
    }
    return 0;
}

int main(){
    solve();

    cout<<sum<<endl;
}