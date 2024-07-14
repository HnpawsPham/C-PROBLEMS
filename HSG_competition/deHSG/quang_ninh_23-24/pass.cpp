#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\pass.inp"),
        out(".\\txt\\pass.out");

int n,wifi;
int a[100000000];

int main(){
    fi>>n;
    for(int i=0; i<n; i++){
        fi>>a[i];
    }

    sort(a,a+n);

    wifi = (a[n-1] - a[1]) * (a[n-2] - a[0]);
    cout<<wifi<<endl;
}