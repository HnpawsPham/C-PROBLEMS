#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TBC.INP"),
        out(".\\txt\\TBC.OUT");

int n;
int a[1000001],b[1000001],sum[1000000];

int main(){
    fi>>n;
    sum[0]=0;

    for(int i=1; i<=n; i++){
        fi>>b[i];
    }

    
    for(int i=1; i<=n; i++){
        a[i]=b[i]*i;
        sum[i] = sum[i-1] +b[i-1];
        a[i]-=sum[i];

        out<<a[i]<<" ";
    }

    fi.close();
    out.close();
}