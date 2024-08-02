#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, k;

int main(){
    cin>>n>>k;

    vector<int> a(n), cnt(1e5 + 1);

    for(auto& x : a){
        cin>>x;
    }

    int l = 0, r = 0, sum = 0, res = 0;

    while(r < n){
        cnt[a[r]]++;

        if(cnt[a[r]] == 1){
            sum++;
        }

        while(sum > k){
            cnt[a[l]]--;
        
            if(cnt[a[l]] == 0){
                sum--;
            }

            l++;
        }

        res+= r - l + 1;

        r++;
    }

    cout<<res<<endl;

    return 0;
}