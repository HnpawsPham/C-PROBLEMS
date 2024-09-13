#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n;
int a[15];
bool check[10];

void print(){
    for(int i = 1; i<=n;i++) cout<<a[i]<<" ";
    cout<<el;
    return;
}

void solve(int i){
    for(int j = 1; j <= n; j++){
        if(!check[j]){
            check[j] = 1;
            a[i] = j;

            if(i == n){
                print();
            }
            else solve(i + 1);
            check[j] = 0;
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    solve(1);
    
    return 0;
}