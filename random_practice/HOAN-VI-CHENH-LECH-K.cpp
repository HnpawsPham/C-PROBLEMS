#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n, k;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;

    bool check[n + 1] = {false};
    int a[n + 1];

    for(int i = 1; i<=n;i++){
        if(i + k <= n && !check[i + k]){
            a[i] = i + k;
            check[i + k] = true;
        }
        else if(i > k && !check[i - k]){
            a[i] = i - k;
            check[i - k] = true;
        }
        else{
            cout<<-1<<el;
            return 0;
        }
    }

    for(int i = 1;i<=n;i++) cout<<a[i]<<" ";

    return 0;
}