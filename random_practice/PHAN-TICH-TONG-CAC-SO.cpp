#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n;
vector<int> res;

void print(){
    for(int x : res) cout<<x<<" ";
    cout<<el;
    return;
}

void solve(int s){
    if(s == n){
        print();
        return;
    }

    int mina = 1;
    if(res.size() > 0) mina = res.back();

    for(int i = mina; i <= min(n - s, n - 1);i++){
        res.push_back(i);
        solve(s + i);
        res.pop_back();
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    solve(0);

    return 0;
}