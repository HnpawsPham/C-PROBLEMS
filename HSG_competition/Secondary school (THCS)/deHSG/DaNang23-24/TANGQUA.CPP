#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TANGQUA.INP"),
        out(".\\txt\\TANGQUA.OUT");

int n,maxx=0;;
int a[1000000];
int l[1000000];

void qhd(){
    a[0] = 0;
    
    memset(l,0, sizeof(l));

    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            if(a[i]>a[j]){
                l[i] = max(l[i], l[j] + 1);
                maxx = max(maxx,l[i]);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fi>>n;

    for(int i=1; i<=n; i++){
        fi>>a[i];
    }

    qhd();

    out<<n-maxx<<endl;

    fi.close();
    out.close();
}
