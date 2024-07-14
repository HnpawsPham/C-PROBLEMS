#include <bits/stdc++.h>
using namespace std;

int n;
int a[1000000];

int main(){
    cin>>n;
    a[0] = 0;

    for(int i=1; i<=n; i++){
        cin>>a[i];
    }

    int cnt=0;
    for(int i=1; i<=n; i++){
        if(a[i] >= a[i-1] && a[i] >= a[i+1]){
            cnt++;
        }
    }

    cout<<cnt<<endl;
}