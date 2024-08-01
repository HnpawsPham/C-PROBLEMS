#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout<<"Nhap x: "<<endl;
    cin>>x;
    cout<<"a) y1 = "<<2*pow(x,3) + 5* pow(x,2) + 7*x+ 15<<endl;
    cout<<"b) y2= "<< pow(sin(x),2) + pow(cos(x),2) + pow(tan(x),2)<<endl;
    cout<<"c) y3 = "<<pow((x + 10),(x+5))<<endl;
    cout<<"d) y4 = "<<3*exp(cos(x+1))<<endl;
    cout<<"e) y5 = "<<log(x+100)<<endl;
}