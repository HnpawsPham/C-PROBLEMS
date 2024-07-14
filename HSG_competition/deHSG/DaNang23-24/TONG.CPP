#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TONG.INP");

int n,k;
int a[10000000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fi>>n>>k;
    for(int i=0; i<n; i++){
        fi>>a[i];
    }

    sort(a,a+n);

    int sum=0;
    for(int i=n-k; i<n; i++){
        sum+=a[i];
    }

    cout<<sum<<endl;
}
