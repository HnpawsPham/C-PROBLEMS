#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAI1.INP"),
        out(".\\txt\\BAI1.OUT");

int n;

bool ngto(int num){
    if(num<2){
        return false;
    }
    for(int i=2; i<num; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

bool check(int num){
    while(num > 0){
        if(!ngto(num)){
            return false;
        }
        num/=10;
    }   
    return true;
}

int main(){
    fi>>n;

    for(int i = pow(10,n-1); i<(pow(10,n-1)+1)*9; i++){
        if(check(i)){
            out<<i<<endl;
        }
    }

    fi.close();
    out.close();
}