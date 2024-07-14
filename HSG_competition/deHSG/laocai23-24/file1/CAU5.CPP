#include <bits/stdc++.h>
using namespace std;

int n;
int a[100000];
bool full = true;

long long max(long long a, long long b){
    if(a > b){
        return a;
    }
    return b;
}

int main(){
    cin>>n;

    long long sum = 0, chosen = 0;
   
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] < 0){
            full = false;
        }
        chosen += a[i];
    }

    if(full == true){
        cout<<chosen<<endl;
    }
    else{

        for(int len = n-1; len>0; len--){
            for(int i=1; i+len- 1 < n; i++){
                sum = sum - a[i-1] + a[i+len-1];
            }
            chosen = max(chosen, sum);
            sum=0;
        }

        cout<<chosen<<endl;
    }   
}