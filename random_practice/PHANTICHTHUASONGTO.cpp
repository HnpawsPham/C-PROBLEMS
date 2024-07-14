#include <bits/stdc++.h>
using namespace std;

int n;

void xuli(int n){
    for(int i=2; i<sqrt(n)+1; i++){
        if(n%i == 0){
            int dem=0;
            while(n%i == 0){
                dem++;
                n/=i;
            }
            cout<<i<<"("<<dem<<") ";
        }
    }
    if(n!=1){
        cout<<n<<endl;
    }
}

// cũng là phân tích mà in ra kiểu khác
void xuli2(int n){
    for(int i=2; i<sqrt(n)+1; i++){
        while(n%i==0){
            cout<<i<<"x";
            n/=i;
        }
    }
    if(n!=1){
        cout<<n<<endl;
    }
}

void xuli3(int n){
    cout<<n<<"= ";
    
    for(int i=2; i<sqrt(n)+1; i++){
        int dem=0;
        while(n%i==0){
            dem++;
            n/=i;
        }

        cout<<i<<"^"<<dem<<" * ";
    }

    if(n!=1){
        cout<<n<<"^1"<<endl;
    }
}

int main(){
    cout<<"Nhap n: ";
    cin>>n;

    xuli3(n);
}