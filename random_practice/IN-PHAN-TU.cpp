#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    bool ok = false;
    int a[n];
    for(int i = 0; i<n;i++){
        cin>>a[i];
        if(i % 2 == 0 && a[i] % 2 == 0){
            ok = true;
            cout<<a[i]<<" ";
        } 
    }

    if(!ok) cout<<"NONE"<<el;

    return 0;
}