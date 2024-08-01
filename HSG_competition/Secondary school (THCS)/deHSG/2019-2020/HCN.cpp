#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\HCN.INP"),
        out(".\\txt\\HCN.OUT");
 
int x1,yy1,x2,y2;  //tọa độ đỉnh trái dưới và đỉnh phải trên 1
int u1,v1,u2,v2;  //tọa độ đỉnh trái dưới và đỉnh phải trên 2
int x0,yy0,u0,v0;  //tọa độ phần chung
int w1,h1,w2,h2; // chiều rộng chiều cao của 2 hcn
int d,r,dt;

bool check(){
    if((x1+w1 >= x2) && (x2+w2 >= x1) && (yy1+w1 >= y2) && (y2+w2 >= yy1)){
        cout<<"YES"<<endl;
        return true;
    }
    return false;
}

void findPoints(int &x0, int &yy0, int &u0, int &v0, int &d, int &r){
    x0 = max(x1,u1);
    u0 = min(x2,u2);
    v0 = min(y2,v2);
    yy0 = max(yy1,v1);

    d = max(yy0,v0) - min(yy0,v0);
    r = max(x0,u0) - min(x0,u0);
}


int main(){
    fi>>x1>>yy1>>x2>>y2;
    fi>>u1>>v1>>u2>>v2;

    w1 = max(x1,x2) - min(x1,x2);
    h1 = max(yy1,y2) - min (yy1,y2);

    w2 = max(u1,u2) - min(u1,u2);
    h2 = max(v1,v2) - min (v1,v2);

    if(check() == true){
        findPoints(x0,yy0,u0,v0,d,r);
        dt = d*r;
        out<<dt;
    }
    else{
        out<<0;
    }

    out.close();
}