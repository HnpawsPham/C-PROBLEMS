#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\HUMBERGER.INP"),
        out(".\\txt\\HUMBERGER.OUT");

string recipe;
int nb,ns,nc;
int sb=0,ss=0,sc=0;
int pb,ps,pc,r;

void buy(int &thing, int &price){
    r-=price;
    thing++;
}

void findSum(){
    while(nb<sb){
        buy(nb,pb);
    }
    while(ns<ss){
        buy(ns,ps);
    }
    while(nc<sc){
        buy(nc,pc);
    }
}

void make(){
    
}

void count(){
    // tính số lượng thành phần yêu cầu
    for(int i=0; i<recipe.length();i++){
        switch (recipe[i])
        {
        case 'B':
            sb++;
            break;
        case 'S':
            ss++;
            break;
        case 'C':
            sc++;
            break;
        default:
            break;
        }
    }

    // xét xem làm đc mấy cái hamburger

}

int main(){
    fi>>recipe;
    fi>>nb>>ns>>nc;
    fi>>pb>>ps>>pc;
    fi>>r;

    count();
    cout<<"nb: "<<nb<<" nc: "<<nc<<" ns: "<<ns<<endl;
    cout<<"sb: "<<sb<<" sc: "<<sc<<" ss: "<<ss<<endl;

    findSum();
    cout<<"nb: "<<nb<<" nc: "<<nc<<" ns: "<<ns<<endl;
}