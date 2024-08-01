#include <bits/stdc++.h>
using namespace std;

int main(){
    fstream fi,out;
    fi.open(".\\txtFiles\\in7.txt");
    out.open(".\\txtFiles\\out7.txt");
    int sum,n,t=0;
    sum=0;
    fi>>n;
    while(n!=0){
        t=n%10;
        n/=10;
        sum+=t;
    }
    out<<sum;
}