#include <bits/stdc++.h>
using namespace std;

int main(){
    fstream fi,out;
    fi.open(".\\txtFiles\\in6.txt");
    out.open(".\\txtFiles\\out6.txt");
    int i,n=0;
    i=2;
    fi>>n;
    out<<n<<"= ";
    
    while(n>1){
        if(n%i==0){
            n=n/i;
        }
        else{
            i++;
        }
        out<<i<<" x ";
    }
}