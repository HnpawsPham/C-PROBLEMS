#include <bits/stdc++.h>
using namespace std;

int find(int a, int b){
    int bcnn=min(a,b);

    while(true){
        if(bcnn%a ==0 && bcnn%b ==0){
            return bcnn;
        }
        else{
        bcnn++;
        }
    }
}

int main(){
    int n=0,t=0,i=2;
    while(n<2){
        cout<<"Nhap n: ";
        cin>>n;
    }

    while(i<=2*n-2){
        t+=find(i,i+2);
        i+=2;
    }
    cout<<"tong = "<<t;
}