#include <bits/stdc++.h>
using namespace std;

int n, sl=1;
int k[10001], c[10001];

int main(){
    cin>>n;
    int sum=0;

    for(int i=0; i<n; i++){
        cin>>k[i]>>c[i];

        if(c[i] == 1){
            sum+=k[i];
            k[i] = 0;
        }
        else if(c[i] > 1){
            sum+=k[i];
            k[i] = 0;
            sl+=c[i]-1;
        }
        
    }

    sort(k,k+n);

    if(sl>=n){
        cout<<"Unlimited"<<endl;
    }
    else{
        for(int i=n-1; i>n-sl-1; i--){
            sum+=k[i];
        }

        cout<<sum<<endl;
    }
}