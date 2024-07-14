#include <bits/stdc++.h>
using namespace std;

double s=0,n=0;

int main(){
    while(n<=0){
        cout<<"Nhap n: ";
        cin>>n;
    }
    // câu a
    s=n*(n+1)/2;
    cout<<"a) Dung cong thuc: "<<s<<endl;
    s=0;
    for(int i=1; i<=n; i++){
        s+=i;
    }
    cout<<"Dung vong for: "<<s<<endl;

    // câu b
    s=pow(n+1,2);
    cout<<"b) Dung cong thuc: "<<s<<endl;
    s=0;
    for(int i=1; i<=2*n+1; i++){
        if(i%2 != 0){
            s+=i;
        }
    }
    cout<<"Dung vong for: "<<s<<endl;

    // câu c
    s=n*(n+1);
    cout<<"c) Dung cong thuc: "<<s<<endl;
    s=0;
    for(int i=2; i<=n*2; i++){
        if(i%2 == 0){
            s+=i;
        }
    }
    cout<<"Dung vong for: "<<s<<endl;
}

