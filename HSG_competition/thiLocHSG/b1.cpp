#include <bits/stdc++.h>
using namespace std;


void caua(){
    int n,s =0 ;

    cout<<"Nhap n:"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        s+= i;
    }

    cout<<"Tong S1 la: "<<s<<endl;
}


void caub(){
    int n,s=0;

    cout<<"Nhap n: "<<endl;
    cin>>n;

    for(int i =1; i<=n; i++){
        s+= pow(i,2);
    }
    cout<<"Tong  S2 la: "<<s<<endl;
}
int giaithua(int num){
    if(num ==1 ){
        return num;
    }
    return num*giaithua(num-1);
}

void cauc(){
    int n,s =0;

    cout<<"Nhap n: "<<endl;
    cin>>n;

    for(int i= 1; i<=n; i++){
        s+= giaithua(i);
    }

    cout<<"Tong S4 la: "<<s<<endl;
}
int main(){
    caua();
    caub();
    cauc();
}