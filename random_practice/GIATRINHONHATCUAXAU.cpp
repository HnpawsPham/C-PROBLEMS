#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int solve(string str, int k){
    vector<int> a;
    priority_queue<int> pq;
    ll sum = 0;

    a.assign(256, 0);

    for(int i = 0; i<str.length(); i++){
        a[int(str[i]) - 48]++;
    }

    for(int i = 0; i <= 255; i++){
        if(a[i] > 0){
            pq.push(a[i]);
        }
    }

    while(k > 0 && pq.top() > 0){
        int top = pq.top();
        pq.pop();

        if(top < k){
            k -= top;
            top = 0;
        }
        else{
            top -= k;
            k = 0;
        }

        pq.push(top);
    }

    while(!pq.empty()){
        sum+= pow(pq.top(),2);
        pq.pop();
    }

    cout<<sum<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int k;
        cin>>k;

        string str;
        cin>>str;

        solve(str, k);
    }
}