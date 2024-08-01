#include <bits/stdc++.h>
using namespace std;

int main(){
    int average = 0,a;
    cout<<"Nhap diem toan: "<<endl;
    cin>>a;
    average= a*3;
    cout<<"Nhap lan luot diem van, ly, anh: "<<endl;
    cin>>a;
    average+=a*2;
    cin>>a;
    average+=a*2;
    cin>>a;
    average+=a*2;
    cout<<"Nhap lan luot diem hoa, sinh: "<<endl;
    cin>>a;
    average+=a;
    cin>>a;
    average+=a;
    cout<<"Diem trung binh: "<<average/11<<" "<<average;
}