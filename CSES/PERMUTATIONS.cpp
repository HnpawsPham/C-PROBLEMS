#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    
    if(n == 1){
        cout<<1<<el;
        return 0;
    }

    if(n < 4){
        cout<<"NO SOLUTION"<<el;
        return 0;
    }

    for(int i = n; i >0;i--){
        if(i % 2 == 1) cout<<i<<" ";
    }
    for(int i = n; i> 0;i--){
        if(i % 2 == 0) cout<<i<<" ";
    }

    return 0;
}