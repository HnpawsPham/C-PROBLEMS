#include <bits/stdc++.h>
using namespace std;

int main(){
    float a,average;
    for(int i=1; i<=3; i++){
        cout<<"Nhap so thu "<<i<<":"<<endl;
        cin>>a;
        average+=a;
    }
    cout<<"Trung binh cong ba so vua nhap la: "<<average/3;
}