#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,m;

int main(){
    cin>>n>>m;
    vector<ll> a(n),b(m);
    
    for(auto& x : a){
        cin>>x;
    }

    for(auto& x : b){
        cin>>x;
    }

    int cnt = 0;
    int i = 0,j = 0;

    while(i < n && j < m){
        if(a[i] < b[j]){
            i++;
            cnt++;
        }
        else{
            cout<<cnt<<" ";
            cnt = 0;
            j++;
        }
    }

    while(j < m){
        cout<<n<<" ";
        j++;
    }
}