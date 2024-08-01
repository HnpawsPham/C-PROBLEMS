#include <bits/stdc++.h>
using namespace std;

int a[1000];

void swap(int *a, int *b){
    int *t;                                                                                                      
    if(*b > *a){
        *t=*b;
        *b=*a;
        *a=*t; 
        cout<<*a<<" "<<*b<<endl;
    }
}

void sap_xep(int *a, int length){
    for(int i=1;i<length; i++){
        for(int j=i-1; j<length;j++){
            swap(&a[i],&a[j]);
        }
    }
}

int main(){
    int n;
    int i=1;
    cout<<"Nhap gia tri so n: ";
    cin>>n;
    
    for(int i=0; i<n; i++){
        cout<<"Nhap gia tri phan tu thu "<<i<<" = ";
        cin>>a[i];
    }

    cout<<"Mang truoc khi sap xep: ";
    for(int i=0; i<n; i++){
        if(i<n-1){
            cout<<a[i]<<", ";
        }
        else{
            cout<<a[i]<<endl;
        }
    }

    cout<<"mang sau khi sap xep: ";

    sap_xep(&a[i],n);


    for(int i=0; i<n; i++){
        if(i<n-1){
            cout<<a[i]<<", ";
        }
        else{
            cout<<a[i]<<endl;
        }
    }
    

}