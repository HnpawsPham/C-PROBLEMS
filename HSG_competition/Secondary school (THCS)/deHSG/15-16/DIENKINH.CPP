#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\DIENKINH.INP"),
        out(".\\txt\\DIENKINH.OUT");

int n,m,maxx=0;
int a[10000000];


int main(){
    fi>>n>>m;
    for(int i=0; i<n; i++){
        int t;
        fi>>t;
        a[t] = i;
        maxx= max(maxx,t);
    }

    for(int i=0; i<=maxx-m+1; i++){
        cout<<a[i]<<" ";
    }

    fi.close();
    out.close();
}