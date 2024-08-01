#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAI1.INP");

long long a,b,l,r;

void sieve(){
    // sàng bội của a, bỏ 

    for(long long i=a; i<=r; i+=a){
    }
}

int main(){
    fi>>a>>b>>l>>r;
    // sieve();


    if(a==1){
        cout<<1<<endl;
    }
    else if(a<b){
        cout<<0<<endl;
    }
    else{
        long long res;

        // int sl = 0;
        // for(int i=l; i<=r; i++){
        //     cout<<i<<" % "<<a<<" = "<<i%a<<endl;     // test
        //     if(i%a == b){
        //         sl++;
        //     }
        // }
        // cout<<sl<<" "<<;

        if(r%b == 0 && a>b+1){
            res = ((r-l+1)/a)+1;
        }
        else{
            res = (r-l+1)/a;
        }

        cout<<res<<endl;
    }

    fi.close();
}