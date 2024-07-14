#include <bits/stdc++.h>
using namespace std;

int main(){
    char choice;
    float a,b;
    
    cout<<"Nhap lan luot hai so thuc: "<<endl;
    cin>>a;
    cin>>b;

    
    cout<<"a) Cong"<<endl;
    cout<<"b) Tru"<<endl;
    cout<<"c) Nhan"<<endl;
    cout<<"d) Chia"<<endl;

    cin>> choice;

    switch (choice)
    {
    case 'a':
        cout<<"Tong cua hai so thuc la: "<<(float)a+b<<endl;
        break;
    case 'b':
        cout<<"Hieu cua hai so thuc la: "<<(float)a-b<<" va "<<(float)b-a<<endl;
        break;
    case 'c':
        cout<<"Tich cua hai so thuc la: "<<(float)a*b<<endl;
        break;
    case 'd':
        cout<<"Thuong cua hai so thuc la: "<<endl;
        if(a !=0){
            cout<<(float)b/a<<"  ";
        }
        if(b!=0){
            cout<<(float)a/b<<endl;
        }
        break;
    default:
        break;
    }
}