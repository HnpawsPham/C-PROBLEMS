#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\HOANVI.INP");

int n;
int isExist[100000000],
    a[10000000];

void quaylui(int i){
    for(int j=1; j<=n; j++){
        if(isExist[j] == 0){
            isExist[j] = 1;
            a[i] = j;

            if(i == n){
                for(int i=1; i<=n; i++){
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
            else{
                quaylui(i+1);
            }
            isExist[j] = 0;
        }
    }
}

int main(){
    fi>>n;
    memset(isExist, false, sizeof(isExist));
    quaylui(1);

    fi.close();
}