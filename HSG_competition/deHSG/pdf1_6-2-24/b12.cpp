#include <bits/stdc++.h>
using namespace std;

int sum=0,n=0,dem=0;

int main(){
    while(n != 9999){
        cin>>n;
        if(n!=9999){
            sum+=n;
            dem++;
        }
    }
    cout<<"tbc: "<<(float)sum/dem;
}