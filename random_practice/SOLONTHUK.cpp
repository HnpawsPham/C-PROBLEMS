#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,k;
vector<ll> a;

int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;

    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        a.push_back(x);
    }

    sort(a.begin(), a.end(), greater<int>());

    cout<<a[k - 1];
}