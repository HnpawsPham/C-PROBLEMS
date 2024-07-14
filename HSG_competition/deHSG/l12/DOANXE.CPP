#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\DOANXE.INP");

int n, p, l;
int w[10000], v[10000];
int check[10000];

float res;

void sumShotestTime(int minSpeed){
    res += p/minSpeed;
}

int main(){
    fi>>n>>p>>l;
    for(int i=0; i<n; i++){
        fi>>w[i]>>v[i];
    }

    memset(check, 0 ,sizeof(check));
}