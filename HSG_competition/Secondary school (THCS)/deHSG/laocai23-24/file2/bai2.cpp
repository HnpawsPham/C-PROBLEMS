#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\bai2.inp"),
        out(".\\txt\\bai2.out");

int m,n,maxS=0;


int pt(int n){
    int s=1;
    for(int i=2; i<n; i++){
        if(n%i==0){
            s*=i;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n!=1){
        s*=n;
    }
    return s;
}

int main(){
    fi>>m;
    int end = m - 10;

    while(m>end){
        int res = pt(m-1);
        if(res > maxS){
            maxS = res;
            n=m-1;
        }

        m--;
    }

    cout<<n<<endl;

}