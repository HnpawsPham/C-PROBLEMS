#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,du,s1,s2,t,bcnn=0;
    fstream fi,out;
    fi.open("./txtFiles/in2.txt");
    out.open("./txtFiles/out2.txt");
    fi>>a>>b;
    s1=a;
    s2=b;
    // hoán đổi vị trí nếu cần
    if(b>a){
        t=b;
        b=a;
        a=t;
    }
    // UCLN
    while(a%b!=0){
        du=a%b;
        a=b;
        b=du;
    }
    out<<"UCLN("<<s1<<","<<s2<<") là "<<b<<endl;
    // BCLN
    bcnn=(s1*s2)/b;
    out<<"BCNN("<<s1<<","<<s2<<") là "<<bcnn;
    out.close();
}
