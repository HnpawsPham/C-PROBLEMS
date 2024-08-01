#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Nhap so cong nhan: ";
    cin>>n;

    struct Cong_nhan{
        string ten[1000];
        int nam_sinh[1000];
        int gio_lam[1000];
    } list;

    // nhập công nhân
    for(int i=1; i<=n; i++){
        cout<<"Nhap cong nhan thu "<<i<<": "<<endl;
        cout<<"Ten: ";
        cin>>list.ten[i];
        cout<<"Nam sinh: ";
        cin>>list.nam_sinh[i];
        cout<<"Gio lam: ";
        cin>>list.gio_lam[i];
    }

    // xuất ra các công nhân được thưởng
    cout<<"Liet ke cac cong nhan duoc thuong: ";
    for(int i=1; i<=n; i++){
        if(list.gio_lam[i] >40){
            if(i<n){
                cout<<list.ten[i]<<", ";
            }
            else{
                cout<<list.ten[i]<<endl;
            }
        }
    }
}