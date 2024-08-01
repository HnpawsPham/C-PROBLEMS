#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\sand.inp"),
        out(".\\txt\\sand.out");

long long a,b,g, tt=0;
long long slbg = 0, slbb = 0;
long long tb,tg;

void make(){
    long long sl;
    if(a/2 > g){
        if(tb > tg){
            while(b>0 && a>1){
                b--;
                a-=2;
                slbb++;
            }
            while(g>0 && a>1){
                g--;
                a-=2;
                slbg++;
            }
        }
        else{
            while(g>0 && a>1){
                g--;
                a-=2;
                slbg++;
            }
            while(b>0 && a>1){
                b--;
                a-=2;
                slbb++;

                cout<<a<<endl;
            }
        }
    }
    else if(a/2 == g){
        slbg = g;
    }
}

int main(){
    fi>>a>>b>>g;
    fi>>tb>>tg;

    if(a<2 || b<1 || g<2){
        out<<0<<endl;
    }
    else{
        make();
    }

    cout<<(slbb*tb + slbg * tg)<<endl;
}