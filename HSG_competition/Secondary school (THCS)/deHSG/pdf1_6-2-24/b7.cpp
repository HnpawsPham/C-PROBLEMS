#include <bits/stdc++.h>
using namespace std;

int m=0,n=0;

int main(){
    while(n<=0){
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(m<=0){
        cout<<"Nhap m: ";
        cin>>m;
    }
    
    if(m<n){
        int t=m;
        m=n;
        n=t;
    }
    cout<<m<<" "<<n<<endl;
    int du = m%n;

    while(du != 0){
        du=m%n;
        if(du==0){
            cout<<n<<endl;
        }
        m=n;
        n=du;

    }
}