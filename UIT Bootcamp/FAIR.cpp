#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define MOD 1000000007

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    int a[n];
    ll maxsz = 0;
    int cnt = 0, res = 0;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    while(n--){
        int x;
        cin>>x;
        pq.push(x);
    }

    while(!pq.empty()){
        int x = pq.top();
        if(x * pq.size() > maxsz){
            maxsz = x * pq.size();
            cnt = pq.size();
            res = x;
        }
        pq.pop();
    }
    cout<<cnt<<" "<<res<<el;
    return 0;
}