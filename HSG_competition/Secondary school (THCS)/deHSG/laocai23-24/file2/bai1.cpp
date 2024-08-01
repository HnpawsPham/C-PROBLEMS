#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\bai1.inp"),
        out(".\\txt\\bai1.out");

long long a,b,k;

int main(){
    fi>>a>>b>>k;

    if(k%2==0){
        long long slb;
        slb = b/k - a/k;

        if(slb%2 == 0){
            out<<"YES"<<endl;
        }
        else{
            out<<"NO"<<endl;
        }
    }
    else{
        out<<"NO"<<endl;
    }
}