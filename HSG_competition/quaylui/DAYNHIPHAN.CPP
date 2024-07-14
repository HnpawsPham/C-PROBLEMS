#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\DAYNHIPHAN.INP");

int n;
int a[1000000];

void quaylui(int i){
    for(int j = 0; j<=1; j++){
        a[i] = j;

        if(i == n){
            for(int i=1; i<=n; i++){
                cout<<a[i];
            }
            cout<<endl;
        }
        else{
            quaylui(i+1);
        }
    }
}

int main(){
    fi>>n;
    quaylui(1);

    fi.close();
}
