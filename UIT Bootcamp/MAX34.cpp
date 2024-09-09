#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

priority_queue<ll, vector<ll>, greater<ll>> pq;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    
    nth_element(a, a + 2, a + n, greater<ll>());
    cout<<a[2]<<" ";
    nth_element(a, a + 3, a + n, greater<ll>());
    cout<<a[3]<<el;
    return 0;
}