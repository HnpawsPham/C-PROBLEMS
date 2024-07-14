#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TAUTHUY.INP"),
        out(".\\txt\\TAUTHUY.OUT");

long long n,a,b, sl=0;

void sieve(long long maxx, long long minn){
    if(minn != maxx){
        for(long long i=maxx+maxx; i<=n; i+=maxx){
            if(i%minn == 0){
                sl++;
            }
        }
    }
    else{
        sl = n;
    }
}

int main(){
    fi>>n;
    fi>>a>>b;

    sieve(max(a,b), min(a,b));
    out<<sl<<endl;

    fi.close();
    out.close();
}