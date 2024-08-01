#include <bits/stdc++.h>
using namespace std;

int t,n,sum;

int xuli(priority_queue<int, vector<int>, greater<int> > pq){
    sum = 0;

    while(pq.size() > 1){
        int top1 = pq.top(); pq.pop();
        int top2 = pq.top(); pq.pop();

        sum += top1 + top2;

        pq.push(top1 + top2);
    }

    cout<<sum<<endl;

    return 0;
}

int main(){
    cin>>t;

    while(t--){
        cin>>n;

        priority_queue<int, vector<int>, greater<int> > a;

        for(int i = 0; i < n; i++){
            int x;
            cin>>x;

            a.push(x);
        }
        
        xuli(a);
    }
}