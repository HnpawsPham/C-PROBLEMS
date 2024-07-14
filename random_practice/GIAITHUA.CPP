#include <bits/stdc++.h>
using namespace std;

double x,n;
double a[500001];

double giaithua(double num){
    if(num<=1){
        return 1;
    }
    return (num) * giaithua(num-1);
}

int main(){
    cin>>n>>x;
    double sum=0;

    for(double i=0; i<n; i++){
        cin>>a[static_cast<int>(i)];
        sum+=giaithua(a[static_cast<int>(i)]);
    }

    if(fmod(sum,giaithua(x)) == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}