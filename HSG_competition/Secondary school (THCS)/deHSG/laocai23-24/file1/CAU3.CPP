#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin>>n;
    
    long long suma=0, sumb=0;

    for(int i=0; i<n; i++){
        long long t;
        cin>>t;
        suma+=t;
    }

    for(int i=0; i<n; i++){
        long long t;
        cin>>t;
        sumb+=t;
    }

    if(suma>sumb){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}