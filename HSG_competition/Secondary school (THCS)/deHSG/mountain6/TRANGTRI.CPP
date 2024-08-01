#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TRANGTRI.INP"),
        out(".\\txt\\TRANGTRI.OUT");


int n,k,sl=0;
int a[1000000];

int main(){
    fi>>n>>k;
    for(int i=0; i<n ;i++){
        fi>>a[i];
    }

    // tim so cay
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] !=0 && a[j] !=0){
                if(max(a[i],a[j]) - min (a[i], a[j]) <=k){
                    sl++;
                    a[j]=0;
                }
            }
        }
    }

    cout<<sl<<endl;

    fi.close();
    out.close();
}