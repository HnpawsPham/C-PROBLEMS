#include <bits/stdc++.h>
using namespace std;

long long n,k,i=0;
long a[1000001];


fstream fi(".\\test.inp");

// void rotate(){
//     int t;
//     t=a[0];

//     for(int i=0; i<n; i++){
//         a[i]=a[i+1];
//     }

//     a[n-1]=t;

// }

int main(){
    cin>>n>>k;

    if(k<=n){
        while(i<k){
            i++;
            cin>>a[i];
            cout<<i<<endl;
        }
    }
    else{
        while(i<n){
            i++;
            cin>>a[i];
        }
    }

    while(k>n){
        k-=n;
    }
    
    cout<<a[k];

}