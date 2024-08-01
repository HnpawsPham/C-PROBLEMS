#include <bits/stdc++.h>
#include <stdlib.h> 
using namespace std;

fstream fi(".\\txt\\VONGTAY.INP"),
        out(".\\txt\\VONGTAY.OUT");

int n,sl=1;
int a[100000],save[100000];

// tìm dãy lặp lại

bool checkrepeat(){
    int cnt=0;
    for(int i=sl; i<sl*2; i++){
        if(a[i] != save[cnt]){
            return false;
        }
        cnt++;
    }
    return true;
}

int main(){
    fi>>n;

    for(int i=0; i<n; i++){
        fi>>a[i];
    }

    // tìm xâu
    int i=1;
    save[0]=a[0];

    while(a[i] != a[0]){
        sl++;
        save[i]=a[i];
        i++;
    }

    while(!checkrepeat()){
        save[i]=a[i];
        i++;
        sl++;
    }


    for(int i = 0; i<sl; i++){
        cout<<save[i]<<" ";
    }

    out<<sl<<endl;

    fi.close();
    out.close();
}