// MENU
// count : từ string đếm số lượng thành phần yêu cầu
// buy: mua thêm đồ chỉ định từ hàm prepare()
// prepare: mua thêm thành phần còn thiếu
// make: làm bánh (giảm số lượng thành phần đang có, tăng số lượng bánh)


#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\HUMBERGER.INP"),
        out(".\\txt\\HUMBERGER.OUT");

string recipe;
int nb,ns,nc;
int sb=0,ss=0,sc=0;
int pb,ps,pc,r;
int sl=0;

void buy(int &thing, int &price){
        r-=price;
        thing++;
}

void prepare(){
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

void make(int &sl){
    if(nb >= sb && ns >= ss && ns >= sc){
        sl++;
        nb-= sb;
        ns-=ss;
        nc-=sc;
    }
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
}

int main(){
    fi>>recipe;
    fi>>nb>>ns>>nc;
    fi>>pb>>ps>>pc;
    fi>>r;

    count();
    
    while(r>= pb && r>= ps && r>= pc){
        prepare();
        make(sl);
    }

    out<<sl;
}