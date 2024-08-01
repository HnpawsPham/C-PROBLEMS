#include <bits/stdc++.h>
using namespace std;

int n,k;

int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;

    priority_queue<int, vector<int>, greater<int> > pq;

    for(int i = 0; i<n; i++){
        int x;
        cin>>x;

        pq.push(x);

        if(i >= k){
            pq.pop();
        }

        if(i >= k - 1){
            cout<<pq.top()<<endl;
        }
    }

    return 0;
}