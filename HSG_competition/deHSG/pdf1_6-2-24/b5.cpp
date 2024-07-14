#include <bits/stdc++.h>
using namespace std;

int n=0;

bool ngto(int n){
    if(n==1){
        cout<<n<<" khong la so nguyen to!";
        return false;   
    }
    for(int i=2; i<n; i++){
        if(n%i == 0){
            cout<<n<<" khong la so nguyen to!";
            return false;
        }
    }
    cout<<n<<" la so nguyen to";
    return true;
}

int main(){
    while(n<=0){
        cout<<"Nhap n: ";
        cin>>n;
    }
    ngto(n);
}