#include <bits/stdc++.h>
using namespace std;

int main(){
    const float pi = 3.14;
    int n,x,y;

    cin>>n>>x>>y;

    int sb = pi*pow(x,2);
    int sd = pi*pow(y,2);

    if(sb/sd >=n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }  
}