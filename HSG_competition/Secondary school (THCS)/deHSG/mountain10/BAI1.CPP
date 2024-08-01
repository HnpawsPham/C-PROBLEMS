#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAI1.INP"),
        out(".\\txt\\BAI1.OUT");


int doben(long long n){
    int cnt = 0;

    if(n%10 == n){
        return 0;
    }

    long long t=1;

    while(n%10 != n){
        while(n>0){
            t*= n%10;
            n/=10;
        }

        n=t;
        t=1;
        cnt++;
    }

    return cnt;
}

int main(){
    while(!fi.eof()){
        long long n;
        fi>>n;

        out<<doben(n)<<endl;
    }
}