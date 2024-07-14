#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\MERGETWOSORTEDLIST.INP");

int n,m;
int a[1000000], b[1000000], res[10000000];

int main(){
    fi>>n>>m;

    for(int i=0; i<n; i++){
        fi>>a[i];
    }

    for(int i=0; i<m; i++){
        fi>>b[i];
    }

    merge(a, a+n, b, b+m, res);
    sort(res, res+n+m);

    for(int i=0; i<m+n; i++){
        cout<<res[i]<<" ";
    }
}