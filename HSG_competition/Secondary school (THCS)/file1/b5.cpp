#include <bits/stdc++.h>
using namespace std;

int main(){
    float a,b;
    cout<<"Nhap lan luot hai so thuc"<<endl;
    cin>>a;
    cin>>b;
    cout<<"I. Tong: "<<a+b<<endl;
    cout<<"II. Hieu: "<<a-b<<" hoac "<<b-a<<endl;
    cout<<"III. Tich: "<<a*b<<endl;
    if(b!=0 && a!=0){
        cout<<"IV. Thuong: "<<a/b<<" va ";
    }
    else if(b!=0 && a==0){
        cout<<"IV. Thuong: "<<a/b<<endl;
    }
    if(a!=0 && b!=0){
        cout<<b/a<<" ";
    }
    else if(a!=0 && b==0){
        cout<<"IV. Thuong: "<<b/a<<endl;
    }
    cout<<"V. Gia tri trung binh: "<<(a+b)/2;
}