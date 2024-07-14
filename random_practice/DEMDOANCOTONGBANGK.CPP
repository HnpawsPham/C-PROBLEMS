#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n,sl=0;
ll a[1000000];
map<ll,ll> cnt;

int main(){
    cin>>n;

    a[0]=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];

        cnt[a[i]]++; //check so lan xuat hien cua phan tu a[i]
        a[i]=a[i-1]+a[i];  

        if(a[i]==0){
            sl++;
        }
        if(cnt[a[i]]>1){
            sl+=cnt[a[i]]-1;
        }

    }

    cout<<sl<<endl;
}