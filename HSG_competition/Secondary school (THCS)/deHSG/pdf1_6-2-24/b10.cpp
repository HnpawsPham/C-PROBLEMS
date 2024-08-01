#include <bits/stdc++.h>
using namespace std;

int n,i=2;

bool ngto(int num){
    if(num<=1){
        return false;
    }
    for(int i=2; i<num; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<"Nhap mot so nguyen duong: ";
    cin>>n;

    while(n!=1){
        if(n%i ==0){
            n/=i;
            cout<<i<<" ";
        }
        else{
            i++;
            while(!ngto(i)){
                i++;
            }
        }
    }
}