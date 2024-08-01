#include <bits/stdc++.h>
using namespace std;

double n=0,s=0;
int i;

int main(){
    while(n<=0){
        cout<<"Nhap n: ";
        cin>>n;
    }

    // câu a
    cout<<"Cau a: "<<endl;
    for(i=1; i<=n; i++){
        s+=i*i;
    }
    cout<<"for: "<<s<<endl;
    i=1;
    s=0;

    while(i<=n){
        s+=i*i;
        i++;
    }
    cout<<"while: "<<s<<endl;
    i=1;
    s=0;

    do{
        s+=i*i;
        i++;
    }
    while(i<=n);
    cout<<"do while: "<<s<<endl;
    i=1;
    s=0;

    // câu b
    cout<<"Cau b: "<<endl;
    for(i=1; i<pow((2*n+1),3); i++){
        s+=pow(i,3);
    }
    cout<<"for: "<<s<<endl;
    s=0;
    i=1;

    while(i<pow((2*n+1),3)){
        s+=pow(i,3);
        i++;
    }
    cout<<"while: "<<s<<endl;
    s=0;
    i=1;

    do{
        s+=pow(i,3);
        i++;
    }
    while(i<=pow((2*n+1),3));
    cout<<"do while: "<<s<<endl;
    s=0;
    i=2;

    // câu c
    cout<<"Cau c: "<<endl;
    for(i=2; i<pow((2*n),4); i++){
        if(i%2 == 0){
            s+=pow(i,4);
        }
    }
    cout<<"for: "<<s<<endl;
    s=0;
    i=2;

    while(i<pow((2*n),4)){
        if(i%2 == 0){
            s+=pow(i,4);
        }
        i++;
    }
    cout<<"while: "<<s<<endl;
    s=0;
    i=2;

    do{
        if(i%2 == 0){
            s+=pow(i,4);
        }
        i++;
    }
    while(i<pow((2*n),4));
    cout<<"do while: "<<s<<endl;
}