#include <bits/stdc++.h>
using namespace std;

int n;

int giaithua(int num){
    if(num<=1){
        return 1;
    }
    return num* giaithua(num-1);
}

int main(){
    cout<<"Nhap n: ";
    cin>>n;
    cout<<n<<"! = "<<giaithua(n);
}