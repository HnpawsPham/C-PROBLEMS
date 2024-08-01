#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    fstream fi,out;
    fi.open("./txtFiles/in1.txt");
    out.open("./txtFiles/out1.txt");
    float a,b,c=0.0;
    fi>>a >> b >> c;
    float delta=pow(b,2)-4*a*c;
    if(a==0.0){
        out<<"a phai khac 0";
    }
    else if(delta < 0){
        out<<"Pt vo nghiem";
    }
    else if(delta==0){
        float result=(-b)/(2*a);
        out<<"Pt co nghiem kep la: "<<result;
    }
    else{
        float x1=(-b)+sqrt(delta)/(2*a);
        float x2=(-b)-sqrt(delta)/(2*a);
        out<<"Pt co 2 nghiem la "<<x1<<" và "<<x2;
    }

    out.close();
}