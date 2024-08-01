#include <bits/stdc++.h>
using namespace std;

double n=0;
float s=0;

float giaithua(int num){
    if(num<=1){
        return 1;
    }
    return num*giaithua(num-1);
}

int main(){
    while(n<=0){
        cout<<"Nhap n: ";
        cin>>n;
    }
    int i=1;
    cout<<"Cau a: "<<endl;
    for(i=1; i<=n; i++){
        s+=(float)1/i;
    }
    cout<<"for: "<<s<<endl;
    s=0;
    i=1;

    while(i<=n){
        s+=(float)1/i;
        i++;
    }
    cout<<"while: "<<s<<endl;
    s=0;
    i=1;

    do{
        s+=(float)1/i;
        i++;
    }
    while(i<=n);
    cout<<"do while: "<<s<<endl;
    s=0;
    i=1;

    cout<<"Cau b:"<<endl;
    for(i=1; i<=pow(n,2); i++){
        s+=1/pow(i,2);
    }
    cout<<"for: "<<s<<endl;
    s=0;
    i=1;

    while(i<=pow(n,2)){
        s+=1/pow(i,2);
        i++;
    }
    cout<<"while: "<<s<<endl;
    s=0;
    i=1;

    do{
        s+=1/pow(i,2);
        i++;
    }
    while(i<=pow(n,2));
    cout<<"do while: "<<s<<endl;
    s=0;
    i=1;

    cout<<"Cau c: "<<endl;
    for(i=1; i<=giaithua(n);i++){
        s+=(float)1/giaithua(i);
    }
    cout<<"for: "<<s<<endl;
    s=0;
    i=1;

    while(i<=giaithua(n)){
        s+=(float)1/giaithua(i);
        i++;
    }
    cout<<"while: "<<s<<endl;
    s=0;
    i=1;

    do{
        s+=(float)1/giaithua(i);
        i++;
    }
    while(i<=giaithua(n));
    cout<<"do while: "<<s<<endl;

}