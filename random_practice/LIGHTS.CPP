#include <bits/stdc++.h>
using namespace std;


fstream fi(".\\txt\\LIGHTS.INP"),
        out(".\\txt\\LIGHTS.OUT");

int n,m,d=0,res=0;
int sl[1000] = {0}, a[1000];

int main(){
    fi>>n>>m;

    for(int i=0;i<n*2; i++){
        fi>>a[i];
        sl[a[i]]++;

        d=max(d,a[i]);
    }

    for(int i=1; i<=n; i++){
        if(sl[i]>0){
            if(sl[i]%2 == 0){
                res++;
            }
        }
    }

    cout<<res<<endl;

}