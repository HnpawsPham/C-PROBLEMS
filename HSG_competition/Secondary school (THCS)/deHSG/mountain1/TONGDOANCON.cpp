#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TONGDOANCON.INP"),
        out(".\\txt\\TONGDOANCON.OUT");

int t, n;

int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}

int main(){
    fi>>t;

    while(t--){
        fi>>n;
        int A[1000];
        int sum=0;

        for(int i=0; i<n;i++){
            fi>>A[i];
            sum = max(sum,(sum+A[i]));
        }
        out<<sum<<endl;
    }
}