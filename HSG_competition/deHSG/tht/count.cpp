#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\count.inp"),
        out(".\\txt\\count.out");

int t;
int a[10000000], cnt[10000000];

int main(){
    fi>>t;

    while(t--){
        int n, maxx=0;
        fi>>n;

        memset(cnt, false, sizeof(cnt));

        for(int i=0; i<n; i++){
            fi>>a[i];
            cnt[a[i]]++;

            maxx = max(maxx, a[i]);
        }

        out<<cnt[maxx]<<endl;
    }

    fi.close();
    out.close();
}