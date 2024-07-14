#include <bits/stdc++.h>
using namespace std;

int n,m,bcnn;

fstream fi(".\\txt\\TN.INP"),
        out(".\\txt\\TN.OUT");

int findTimes(int meet, int x){
    return meet / x;
}

int main(){
    fi>>n;
    fi>>m;

    // tìm bội chung nhỏ nhất của m và n
    bcnn=max(m,n);

    while(true){
        if(bcnn%m == 0 && bcnn%n == 0){
            break;
        }
        bcnn+=max(m,n);
    }

    out<<bcnn<<endl;
    out<<findTimes(bcnn,n)<<" "<<findTimes(bcnn,m);
}

