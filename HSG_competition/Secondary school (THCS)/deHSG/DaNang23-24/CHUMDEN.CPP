#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\CHUMDEN.INP");

int n,k;
int a[1000000];

void greedy(){
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] != 0 && a[j] != 0){
                if(a[i] %2 != 0 && a[j] %2 != 0){
                    cnt++;
                }
            }
        }
    }

    cout<<cnt<<endl;
}

int main(){
    fi>>n>>k;
    for(int i=0; i<n; i++){
        fi>>a[i];
    }

    greedy();

   
}
