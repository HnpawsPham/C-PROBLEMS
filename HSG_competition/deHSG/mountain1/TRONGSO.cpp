#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TRONGSO.INP"),
        out(".\\txt\\TRONGSO.OUT");

int N,maxx=0;
string str[1000];
string container;

int xuli(string str){
    int tb=0,dem=0;
    for(int i=0; i<str.length(); i++){
        if(isdigit(str[i])){
            tb+=str[i];
            dem++;
        }
    }
    if(dem!=0){
        tb/=dem;
    }
    if(tb>maxx){
        maxx = tb;
        container = str;
    }
}

int main(){
    fi>>N;
    for(int i=0; i<N; i++){
        fi>>str[i];
    }

    if(maxx==0){
        out<<0;
    }
    else{
        out<<container;
    }

    fi.close();
    out.close();
}