#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    float sum=0;

    for(int i=1; i<n; i++){
        sum+=sqrt(i+sqrt(i+1));
    }

    float rounded = (round(sum * pow(10,5))) / pow(10,5);
    cout<<rounded<<endl;
}