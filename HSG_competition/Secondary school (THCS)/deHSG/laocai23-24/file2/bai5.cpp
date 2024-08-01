#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\bai5.inp"),
        out(".\\txt\\bai5.out");

int n;
int a[6000000];

int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fi>>n;

    for(int i = 0; i<n; i++){
        fi>>a[i];
    }

    sort(a, a+n);

    int maxx = 0;

    for(int i = 0; i<n; i++){
        if(a[n-1] % a[i] != 0){
            maxx = max(maxx, fmod(a[n-1],a[i]));
        }
    }

    cout<<maxx<<endl;
    out<<maxx<<endl;

    fi.close();
    out.close();
}