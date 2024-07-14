#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAIBIEN.INP");

int n,m, minn=2000, pos=0;

int main(){
    fi>>n>>m;

    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            int x;
            fi>>x;
            sum+=x;
        }

        if(sum < minn){
            pos = i+1;
            minn = sum;
        }
    }

cout<<endl;
    cout<<pos<<endl;
}