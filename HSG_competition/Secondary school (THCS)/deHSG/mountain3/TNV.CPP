#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TNV.INP"),
        out(".\\txt\\TNV.OUT");

int n,most=0,slln=0,chosen;
int a[100000000],dem[10000000],sl[10000000];

int main(){
    fi>>n;
    for(int i=0; i<n;i++){
        fi>>a[i];
        dem[a[i]]++;
        sl[a[i]]++;
        
        if(dem[a[i]] > most){
            most = dem[a[i]];
        }
        if(sl[a[i]] > slln){
            slln = sl[a[i]];
        }
    }

    // in ra
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            if(dem[a[i]] == most && sl[a[i]] == slln && a[i] >= a[j]){
                chosen = a[i];
            }
            else{
                dem[a[i]] = 0;
                a[i]=0;
                sl[a[i]] = 0;
            }
        }
    }

    out<<chosen<<" "<<slln;

    out.close();
    fi.close();
}   