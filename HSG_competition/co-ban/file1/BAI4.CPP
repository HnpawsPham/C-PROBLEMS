#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAI4.INP"),
        out(".\\txt\\BAI4.OUT");

long long n,k;
long long su[10000000];

void sieve(){
    for(long long i = 2; i <=n; i++){
        su[i] = 0;
    }

    for(long long i=2; i<=n; i++){
        su[i] = i + 1;

        if(su[i] <= 10000001){
            for(long long j=i+i; j<=n; j+=i){
                su[j] += i;
            }
        }
        else{
            break;
        }
    }
}

int main(){
    fi>>n>>k;
    sieve();

    if(k == 1){
        out<<1<<endl;
    }
    else if(k > 10000001){
        out<<"Khong co so nao"<<endl;
    }
    else{
        for(long long i=1; i<=n; i++){
            if(su[i] == k){
                out<<i<<" ";
            }
        }
    }

    fi.close();
    out.close();
}