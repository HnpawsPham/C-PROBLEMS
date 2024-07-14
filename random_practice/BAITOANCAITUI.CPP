#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAITOANCAITUI.INP");

int n,k;
int w[1000000],value[1000000];
int check[1000][1000];

int main(){
    fi>>n>>k;
    for(int i=1; i<=n; i++){
        fi>>w[i];
    }
    for(int i=1; i<=n; i++){
        fi>>value[i];
    }

    memset(check,0,sizeof(check));

    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            // khong lua chon do vat
            check[i][j] = check[i-1][j];
            // co the dua do vat 
            if(j>=w[i]){
                check[i][j] = max(check[i][j], check[i-1][j - w[i]] + value[i]);
            }
        }
    }

    cout<<check[n][k];
}