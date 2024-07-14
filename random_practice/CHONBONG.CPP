#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\CHONBONG.INP"),
        out(".\\txt\\CHONBONG.OUT");

int n,k;
int a[10000000];

int main(){
    fi>>n>>k;

    for(int i=0; i<n ;i++){
        fi>>a[i];
    }

    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(a[i] != a[j] && a[i] != 0 && a[j] != 0){
                cnt++;
                a[i]=a[j]=0;
            }
        }
    }

    cout<<cnt*2<<endl;
    out<<cnt*2<<endl;
}