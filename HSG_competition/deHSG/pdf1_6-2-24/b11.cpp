#include <bits/stdc++.h>
using namespace std;

string names[10]={"Mai","Lan","Hoa","Tuan","Khanh","Thang","Dat","Loan","Huong","Linh"};
float score[10];
bool isExist[10]={false};

int main(){
    for(int i=1; i<=10;i++){
        if(i!=10){
            cout<<i<<". "<<names[i-1]<<", ";
        }
        else{
            cout<<i<<". "<<names[i-1]<<endl;
        }
    }
    int inp=1;
    cout<<"Nhap so thu tu cua sinh vien de nhap diem, nhap 0 de thoat"<<endl;
    while(inp!=0){
        cout<<"Nhap so thu tu: ";
        cin>>inp;
        if(inp!=0){
            cout<<"Nhap diem cua '"<<names[inp-1]<<"': ";
            cin>>score[inp];
            isExist[inp]=true;
        }

    }
    cout<<endl;
    cout<<"--- BANG DIEM SINH VIEN ---"<<endl;
    for(int i=1; i<=10;i++){
        cout<<i<<". "<<names[i-1]<<" | diem: ";
        if(isExist[i]){
            cout<<score[i]<<endl;
        }
        else{
            cout<<"chua co"<<endl;
        }
    }
}