#include <bits/stdc++.h>
using namespace std;

long long a,b,vsize;
vector<long long> ngto(1);

void sieve(){
    ngto.assign(vsize, 1);

    ngto[0] = 0;
    ngto[1] = 0;
    
    for(int i = a; i<sqrt(b); i++){
        if(ngto[i] == 1){
            cout<<i<<" ";
            for(int j=i*i; j<=b; j+=i){
                ngto[j] = 0;
            }
        }
    }
}


int main(){
    cin>>a>>b;
    vsize = max(a,b) - min(a,b) +1;

    sieve();

    for(int i=sqrt(b); i<=b; i++){
        if(ngto[i] == 1){
            cout<<i<<" ";
        }
    }
}