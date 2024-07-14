#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\datas\\LUCKY.INP"),
        out(".\\datas\\LUCKY.OUT");

int n,sl=0;
long k;
long a[100000];

int main(){

    fi >> n>> k;
    
    for(int i=0; i<n ;i++){
        fi>>a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
                if(a[i]+a[j] == k){
                    cout<<a[i]<<" "<<a[j]<<endl;
                    sl++;
                }
        }
    }

    out<<sl<<endl;
}