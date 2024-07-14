#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\FADOUBLE.INP"),
        out(".\\txt\\FADOUBLE.OUT");

int n;

int main(){
    fi>>n;
    int odd=0,even=0,gto=1,gte=1;

    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            gte*=i;
            even+=gte;
        }
        else{
            gto*=i;
            odd+=gto;
        }
    }

    out<<odd-even<<endl;
}