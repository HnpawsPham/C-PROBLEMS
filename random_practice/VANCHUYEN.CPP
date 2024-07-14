#include <bits/stdc++.h>
using namespace std;

int n,s;
int exist=-1;

int main(){
    cin>>n>>s;
    int a[n],cnt[1000000];
    int sl=0;

    a[0]=0;
    memset(cnt,0,sizeof(cnt));

    for(int i=1; i<=n; i++){
        cin>>a[i];

        cnt[a[i]]++;
        a[i]=a[i-1]+a[i];

        if(a[i]==s){
            sl++;
        }
        if(cnt[a[i]]>=1){
            sl+=cnt[a[i]]-1;
        }
    }
    cout<<exist;
}