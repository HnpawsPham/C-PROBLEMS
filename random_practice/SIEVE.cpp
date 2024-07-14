#include <bits/stdc++.h>
using namespace std;

int a[1000000];

void sieve(){
    
    // đánh dấu tất cả là số ngto
    for(int i=0; i<sizeof(a)/sizeof(int); i++){
        a[i]=1;
    }

    a[0]=0;
    a[1]=0;

    for(int i=2; i<sqrt(sizeof(a)/sizeof(int));i++){
        if(a[i]==1){
            // duyệt các bội của i và cho nó = 0
            for(int j=i*i; j<sizeof(a)/sizeof(int); j+=i){
                a[j]=0;
            }
        }
    }
}

void print(){       //in ra các số ngto
    for(int i=0; i<sizeof(a)/sizeof(int); i++){
        if(a[i] == 1){
            cout<<i<<", ";
        }
    }
}

int main(){
    sieve();
    print();
}