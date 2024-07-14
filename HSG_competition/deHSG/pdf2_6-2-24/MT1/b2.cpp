#include <bits/stdc++.h>
using namespace std;

int a[10],sum=0;

int tong_le (int a[], int length){
    for(int i=0; i<length; i++){
        if(a[i]%2 != 0){
            cout<<a[i]<<endl;
            sum+=a[i];
        }
    }
    cout<<sum;
}

int main(){
    for(int i=0; i<10; i++){
        cout<<"nhap gia tri phan tu thu "<<i<<"= ";
        cin>>a[i];
    }
    tong_le(a,10);
}