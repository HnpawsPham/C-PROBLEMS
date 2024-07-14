#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TONGBANG.INP"),
        out(".\\txt\\TONGBANG.OUT");

int M,N;
int sum=0;

int main(){
    fi>>M>>N;
    // row  col
    for(int i=1; i<=M; i++){
        for(int j=1; j<=N; j++){
            if((i+j)%2 == 0){
                sum+=(i-1)*N+j;
            }
        }
    }

    out<<sum;
}