#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
    float r;
    cout<<"Nhap ban kinh cua hinh tron"<<endl;
    cin>>r;
    cout<<"Dien tich hinh tron: "<<pow(r,2)*3.14<<endl; 
    cout<<"Chu vi hinh tron: "<<r*2*3.14<<endl;

    float s;
    cout<<"Nhap dien tich cua hinh tron:"<<endl;
    cin>>s;
    cout<<"Ban kinh hinh tron: "<<sqrt(s/3.14)<<endl;
    cout<<"Chu vi hinh tron: "<<sqrt(s/3.14)*2*3.14;

}