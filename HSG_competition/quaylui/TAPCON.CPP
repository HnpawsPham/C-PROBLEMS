#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TAPCON.INP");

int n,k;
int a[100000000];

void quaylui(int i){
    for(int j= a[i-1] + 1 ; j<=n; j++){
        a[i] = j;

        if(i==k){
            for(int i=1; i<=k; i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else{
            quaylui(i+1);
        }
    }
}

int main(){
    fi>>n>>k;
    a[0] = 0;

    quaylui(1);

    fi.close();
}
