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
    unordered_set<ll> s;

    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        if(!s.count(x)){
            cout<<0<<" ";
            s.insert(x);
            continue;
        }
        cout<<1<<" ";
    }
  
    return 0;
}