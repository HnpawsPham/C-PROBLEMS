#include <bits/stdc++.h>
using namespace std;

class Ptbn{
    public:
    int b,c;

    void gpt(int b, int c){
        cout<<"x = "<<(float)-c/b<<endl;
    }
};

class Ptbh : public Ptbn{
    public:
    int a;

    void input(int &a,int &b, int &c){
        cout<<"Nhap cac he so a, b, c: ";
        cin>>a>>b>>c;
        cout<<endl;

        cout<<"Phuong trinh co dang: "<<a<<"x^2 + "<<b<<"x + "<<c<<" =0 : ";
    }

    void gpt(int a,int b, int c){
        float delta,x1,x2;
        delta = b*b - 4*a*c;

        if(delta == 0 ){
            cout<<"co nghiem kep x1=x2=";
            x1=-b/2*a;
            cout<<x1<<endl;
        }
        else if(delta < 0){
            cout<<"vo nghiem"<<endl;
        }
        else if(delta > 0){
            cout<<"co hai nghiem phan biet "<<endl;
            x1=(-b + sqrt(delta))/(2*a);
            x2=(-b - sqrt(delta))/(2*a);
            cout<<"x1 = "<<x1<<", x2 = "<<x2<<endl;
        }
    }
};


int main(){
    Ptbh ptbh;
    Ptbn ptbn;
    ptbh.input(ptbh.a, ptbn.b, ptbn.c);

    if(ptbh.a == 0){
        ptbn.gpt(ptbn.b,ptbn.c);
    }
    else{
        ptbh.gpt(ptbh.a, ptbn.b, ptbn.c);
    }
}