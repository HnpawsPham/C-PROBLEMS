#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAI3.INP"),
        out(".\\txt\\BAI3.OUT");

long long n,k;
int ngto[100000000],
    su[10000000];

void sieve(){
    for(int i =0; i<=n; i++){
        su[i] = 0;
    }

    for(long long i = 1; i <= n; i++){
        su[i] ++;
        if (su[i] <= 240){ // max k = 240
            for(long long j = i + i; j <= n; j+=i){
                su[j] += 1;
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
        cout<<1<<endl;
    }
    else{
        for(int i=1; i<=n; i++){
            if(su[i] == k){
                out<<i<<" ";
            }
        }
    }

    fi.close();
    out.close();
}