#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\REHALL.INP"),
        out(".\\txt\\REHALL.OUT");


int n,total=0;
int t1[10000],t2[10000];
int m[10000];

int main(){
    fi>>n;

    for(int i=0; i<n; i++){
        fi>>t1[i]>>t2[i]>>m[i];
        total+=m[i];
    }

    cout<<total<<endl;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(j!=i){
                if(t1[j] <=t2[i] && t1[j]>= t1[i]){
                cout<<t1[i]<<" "<<t2[i]<<" "<<m[i]<<endl;
                    if(m[i]<m[j]){
                        total-=m[i];
                        m[i]=0;
                    }
                    else{
                        total-=m[j];
                        m[j]=0;
                    }
                }
            }
        }
    }
    out<<total<<endl;
}