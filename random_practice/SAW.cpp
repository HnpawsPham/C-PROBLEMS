#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\SAW.INP");

long long n,m,res;
long long a[10000000];

long long max(long long a, long long b){
    if(a > b){
        return a;
    }
    return b;
}

bool canCut(long long h){
    long long sum=0;

    for(int i=0; i<n; i++){
        sum += max(0, a[i] - h);
    }

    return sum>=m;
}

void binarySearch(){
    long long l=0, r=a[n-1];

    while(l<r){
        long long mid = (l+r)/2;

        if(canCut(mid)){
            l = mid + 1;
        }
        else{
            r=mid-1;
        }
    }


    res=l-1;
    
}

int main(){
    fi>>n>>m;
    for(int i=0; i<n; i++){
        fi>>a[i];
    }

    sort(a,a+n);
    binarySearch();

    cout<<res<<endl;

}