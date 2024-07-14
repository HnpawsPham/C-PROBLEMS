#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\CAU4.INP");

int n, maxx=0;
int gr1=0,gr2=0;

int main(){
    fi>>n;

    for(int i=0; i<n; i++){
        int x,y;
        fi>>x>>y;
        gr1+=x;
        gr2+=y;
    }

    maxx = max(gr1,gr2);

    cout<<maxx<<endl;
}