#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\SUBSET.INP");

int n,k;
int a[10000000];

int zero_count(int num){
    int sum = 0;

    while(num%10 == 0){
        sum++;
        num/=10;
    }

    return sum;
}

int dequi(int i){
    int s;
    for(int j=i; j<n; j++){
        // s=a[j];
       
// cbrt()
        if(i<k){
            dequi(i+1);
            // s *= dequi(i+1);
            // cout<<s<<endl;
             cout<<a[j]<<" ";
        }
        else{
            cout<<endl;
            return s;
        }
    }
}

int main(){
    fi>>n>>k;

    for(int i=0; i<n; i++){
        fi>>a[i];
    }

    cout<<dequi(0);
}