#include <bits/stdc++.h>
using namespace std;

int n=0;

int giaithua(int num){
    if(num<=1){
        return 1;
    }
    return num*giaithua(num-2);
}

int main(){
    cout<<"Nhap n: ";
    cin>>n;
    cout<<"giai thua: "<<giaithua(n)<<endl;
}