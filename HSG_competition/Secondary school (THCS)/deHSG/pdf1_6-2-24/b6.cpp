#include <bits/stdc++.h>
using namespace std;

int n=0;

bool ngto(int n){
    if(n==1){
        return false;   
    }
    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    while(n<2){
        cout<<"Nhap n: ";
        cin>>n;
    }
    for(int i=1 ; i<=n ; i++){
        if(ngto(i)){
            cout<<i<<" ";
        }
    }
}