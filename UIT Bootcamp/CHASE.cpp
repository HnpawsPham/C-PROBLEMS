#include <bits/stdc++.h>
#define el "\n"
#define pli pair<ll, int>
using namespace std;
using ll = long long;

int n, k;
int v1, v2;
ll s;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double res = 0;
    cin>>n>>k;
    cin>>v1>>v2;
    cin>>s;
    priority_queue <pli, vector<pli>, greater<pli>> pq;

    for(int i = 0;i<n;i++){
        ll x;
        int a;
        cin>>x>>a;
        pq.push({x, a});
    }

    if(s == 0){
        cout<<res<<el;
        return 0;
    }
    else if(v1 >= v2){
        cout<<"inf"<<el;
        return 0;
    }

    while(!pq.empty()){
        pli cur = pq.top();
        pq.pop();
        
    }

    return 0;
}