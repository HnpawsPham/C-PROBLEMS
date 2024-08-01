#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\CAU3.INP");

int n;
int a[10000000];

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main(){
    fi>>n;
    int sum=0,maxx=0;

    for(int i=0; i<n; i++){
        fi>>a[i];
        sum+=a[i];
    }

    qsort(a,n,sizeof(int),compare);

    for(int i=0; i<n/2; i++){
        maxx += a[n-i-1] - a[i];
    }

    cout<<maxx+sum<<endl;
}