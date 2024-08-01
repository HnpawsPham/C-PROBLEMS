#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\NUMBERX.INP");

long long a,b,x;

bool check(long long a, long long b, long long u){
    if((a+u)%b == 0 && (b+u)%a==0){
        return true;
    }

    return false;
}

void xuli(int a, int b){
    // tim boi cua min
    long long i=2;

    while(!check(a,b,a*i-b)){
        i++;
    }

    x=a*i-b;
}

int main(){
    fi>>a>>b;

    if(a==b){
        x=0;
    }
    else{
        xuli(min(a,b), max(a,b));
    }

    cout<<x<<endl;
}