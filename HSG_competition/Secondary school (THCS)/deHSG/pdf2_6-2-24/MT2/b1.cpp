#include <bits/stdc++.h>
using namespace std;

int *ptr;

int tong(int *a, int *b){
    return *a+*b;
}

int main(){
    int n,t=0,i=1;
    cout<<"Nhap n: ";
    cin>>n;
    
    while(i<=n){
        t=tong(&i,&t);
        i++;
    }
    cout<<"Tong T= 1+2+3+...+n= "<<t;
}