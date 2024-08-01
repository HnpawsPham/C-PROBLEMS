#include <bits/stdc++.h>
using namespace std;

int n,k;

int giaithua(int num){
    if(num<=1){
        return 1;
    }
    return num*giaithua(num-1);
}

int main(){
    cin>>n>>k;
    cout<<giaithua(n)/(giaithua(n-k)*giaithua(k));
}