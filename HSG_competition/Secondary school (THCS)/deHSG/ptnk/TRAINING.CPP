#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TRAINING.INP"),
        out(".\\txt\\TRAINING.OUT");

int n,k;
long long a[5000000],x[5000000];
int cnt[5000000];

void incremental(long long &any){
    memset(cnt,0,sizeof(cnt));

    int l=0, r=k-1;

    while(l<=r){
        int mid = (l+r)/2;

        if(x[mid]<=any){
            for(int i=mid; i>=0; i--){
                if(cnt[i] == 0){
                    cnt[i]=1;
                    any+=x[i];
                    r=k-1;
                }
                else{
                    break;
                }
            }
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fi>>n>>k;
    for(int i=0; i<n; i++){
        fi>>a[i];
    }
    for(int i=0; i<k; i++){
        fi>>x[i];
    }

    sort(x,x+k);

    for(int i=0; i<n; i++){
        incremental(a[i]);
        out<<a[i]<<" ";
    }
}