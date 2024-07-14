#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[10];

    for(int i=0; i<10; i++){
        cout<<"Nhap gia tri phan tu thu "<<i<<" = ";
        cin>>a[i];
    }

    cout<<"mang truoc khi sap xep: ";
    for(int i=0; i<10; i++){
        if(i<9){
            cout<<a[i]<<", ";
        }
        else{
            cout<<a[i]<<endl;
        }
    }

    cout<<"mang sau khi sap xep: ";

    int t;
    for(int i=1; i<10; i++){
        for(int j=0; j<10; j++){
            if(a[j]>a[i]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    for(int i=0; i<10; i++){
        if(i<9){
            cout<<a[i]<<", ";
        }
        else{
            cout<<a[i]<<endl;
        }
    }

}