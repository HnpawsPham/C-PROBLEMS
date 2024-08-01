#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TIMKIEM.INP"),
        out(".\\txt\\TIMKIEM.OUT");

int n,k;
int a[100000000];

int main(){
    fi>>n>>k;
    for(int i=0; i<n; i++){
        fi>>a[i];

        if(a[i] == k){
            out<<i+1<<endl;
            return 0;
        }
    }
    out<<"NO"<<endl;

    fi.close();
    out.close();

}