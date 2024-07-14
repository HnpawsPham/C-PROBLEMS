#include <bits/stdc++.h>
using namespace std;

class Points{
    public:
    int x[2],y[2];

    void inputX(int &x){
        cin>>x;
    }

    void inputY(int &y){
        cin>>y;
    }
    void outputX(int &x){
        cout<<x;
    }

    void outputY(int &y){
        cout<<y;
    }
};

class Lines: public Points{
    public:
    int a[2],b[2];

    void input(int &x, int &y, int &a, int &b,int index){
        cout<<"Nhap toa do dt thu "<<index<<": ";
        cin>>x>>y>>a>>b;
    }

    void print(int &x, int &y, int &a, int &b,int index){
        cout<<"Toa do duong thang thu "<<index<<": ("<<x<<","<<y<<")("<<a<<","<<b<<")"<<endl;
    }

    float lengthCount(int x, int y, int a, int b){
        float length;
        length= sqrt(((a-x)*(a-x)) +((b-y)*(b-y)));
        return length;
    }

    void check(float d1, float d2,int x1, int y1, int a1, int b1,int x2, int y2,int a2, int b2){
        if(((d1*x2-d1*x1)*(d2*b2-d2*b1)) == ((d1*y2 - d1*y1)*(d2*a2-d2*a1))){
            cout<<"Hai duong thang da cho song song hoac trung nhau"<<endl;
        }
    }
};

int main(){
    Points point;
    Lines line;

    for(int i=0; i<2; i++){
        line.input(point.x[i], point.y[i], line.a[i], line.b[i],i);
    }
    cout<<endl;
    for(int i=0; i<2; i++){
        line.print(point.x[i], point.y[i], line.a[i], line.b[i],i);
    }
    cout<<endl;

    float d1, d2;
    d1=line.lengthCount(point.x[0], point.y[0], line.a[0], line.b[0]);
    d2=line.lengthCount(point.x[1], point.y[1], line.a[1], line.b[1]);

    line.check(d1,d2,point.x[0], point.y[0], line.a[0], line.b[0],point.x[1], point.y[1], line.a[1], line.b[1]);
}