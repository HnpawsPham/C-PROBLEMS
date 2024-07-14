#include <bits/stdc++.h>
using namespace std;

int nhap(int A[], int N){
    cout<<"Nhap lan luot cac so trong phan tu"<<endl;
    for(int i=0; i<N; i++){
        cin>>A[i];
    }
}

int timkiem(int A[], int N){
    int k;
    cout<<"Nhap so k: "<<endl;
    cin>>k;

    for(int i=0; i< N; i++){
        if(A[i] == k){
            cout<<A[i]<<" ";
            return true;
        }
    }
    return false;
}

int timNhoNhat(int A[], int N){
    int min = A[0];
    for(int i=1; i< N; i++){
        if(A[i]< min){
            min = A[i];
        }
    }
    return min;
}

double trungbinh(int A[], int N){
    double tb=0;

    for(int i=0 ;i< N; i++){
        tb+=A[i];
    }
    return (float)tb/N;
}

int main(){
    int N;
    cout<<"Nhap so N: "<<endl;
    cin>>N;
    int A[N];

    nhap(&A[N],N);

    cout<<"So nho nhat trong mang la: "<<timNhoNhat(&A[N],N)<<endl;
    cout<<"Trung binh cac phan tu cua mang la: "<<trungbinh(&A[N],N)<<endl;

    if(timkiem(&A[N],N)){
        cout<<"Co tim thay so k trong mang A"<<endl;
    }
    else{
        cout<<"Khong tim thay so k trong mang A"<<endl;
    }
}