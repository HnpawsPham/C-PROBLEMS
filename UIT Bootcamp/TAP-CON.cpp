#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n;
const int maxn = 100;
int a[maxn];

void solve(int n){
    for(int i = 0; i < 1 << n;i++){
        vector<int> arr;
        for(int j = 0; j < n; j++){
            if((i >> j) & 1){
                arr.push_back(a[j]);
            }
        }
        for(int x : arr){
            cout<<x<<" ";
        }
        cout<<el;
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    solve(n);

    return 0;
}