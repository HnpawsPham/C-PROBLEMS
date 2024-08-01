#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TOHOP.INP"), out(".\\txt\\TOHOP.OUT");

int n, k;
int isExist[1000]= {0};
int values[1000] = {0};

int giaithua(int n){
    if (n == 1){
        return 1;
    }
    return n * giaithua(n - 1);
}

void print(){
    for(int j=1; j<=k; j++){
        out<<values[j]<<" ";
    }   
    out<<endl;
}

void quayluisinhtohop(int i){
    for(int j= values[i-1]+1; j<=n; j++){
        values[i]=j;

        if(i==k){
            print();
        }
        else{
            quayluisinhtohop(i+1);
        }
    }
}

int main(){ 
    fi >> n;
    fi >> k;

    if(n==k){
        out<<1<<endl;
    }
    else{
        out<<giaithua(n) / (giaithua(n - k) * giaithua(k))<<endl;
    }

    quayluisinhtohop(1);
    out.close();
}