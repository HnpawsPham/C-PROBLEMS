#include <bits/stdc++.h>
using namespace std;

int n,d,sl=0;
int a[1000000];

void check(int &a, int &b){
    if(max(a,b) - min(a,b) <= d){
        // cout<<"("<<a<<","<<b<<")"<<endl;
        sl++;
        a=b=-1;
    }
}

void findPairs(){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i] > 0 && a[j] >0){
                check(a[i],a[j]);
            }
        }

    }
}

int main(){
    cin>>n>>d;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    findPairs();

    cout<<sl<<endl;
}