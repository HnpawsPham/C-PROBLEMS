#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TIMSNT.INP"),
        out(".\\txt\\TIMSNT.OUT");

int m,n;
int a[1000000];

bool checkSum(int num){
    int sum=0;

    while(num>0){
        sum+=num%10;
        num/=10;
    }

    if(sum==m){
        return true;
    }
    return false;
}

void sieve(){
    a[0]=1;
    a[1]=1;

    for(int i=2; i<sqrt(n); i++){
        if(a[i]==0){

            for(int j=i*i; j<=n; j+=i){
                a[j]=1;
            }
        }
    }
}

int main(){
    fi>>n>>m;

    sieve();

    for(int i=2; i<=n; i++){
        if(checkSum(i) && a[i]==0){
                out<<i<<" ";
                cout<<i<<" ";
        }
    }

    fi.close();
    out.close();

    // chắc full test á cô
}