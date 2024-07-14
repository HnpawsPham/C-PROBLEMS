#include <bits/stdc++.h>
using namespace std;

void xuatchan(int A[], int N){
    cout<<"Cac so chan trong mang la: ";
    for(int i =0; i< N; i++){
        if(A[i]%2 == 0){
            cout<<A[i]<<" ";
        }
    }
    cout<<endl;
}

void xuatVTchan(int A[], int N){
    cout<<"Vi tri cac so chan la: ";
    for(int i =0; i< N; i++){
        if(A[i]%2 == 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

void thanhle(int A[], int N){
    for(int i =0; i< N; i++){
        if(A[i]%2 == 0){
            A[i]+=1;
        }
    }
}

int nhap(int A[], int N){
    cout<<"Nhap lan luot cac phan tu: "<<endl;
    for(int i=0; i<N; i++){
        cin>>A[i];
    }
}

int xuat(int A[], int N){
    cout<<"Cac phan tu trong mang: ";
    for(int i=0; i<N; i++){
        cout<<A[i]<<" ";
    }
}

int main(){

    int MAX = 100, N; 
    int A[MAX];

    cout<<"Nhap so N: "<<endl;
    cin>>N;

    if(N>MAX){
        cout<<"N qua lon, chay lai chuong trinh"<<endl;
    }
    else{
        nhap(&A[MAX],N);
        
        xuatchan(&A[MAX],N);
        xuatVTchan(&A[MAX],N);
        thanhle(&A[MAX],N);

        xuat(&A[MAX],N);
    }
}