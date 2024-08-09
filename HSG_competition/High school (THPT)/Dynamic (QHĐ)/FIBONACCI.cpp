#include <bits/stdc++.h>
using namespace std;

int t,n;
vector<int> res, a(93, -1);

int fibo(int num){
    if(num < 2){
        return 1;
    }

    if(a[num] == -1){
        a[num] = fibo(num - 1) + fibo(num - 2);
    }

    return a[num];
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>t;

    while(t--){
        cin>>n;
        res.push_back(fibo(n));
    }

    for(auto x : res){
        cout<<x<<endl;
    }

    return 0;
}