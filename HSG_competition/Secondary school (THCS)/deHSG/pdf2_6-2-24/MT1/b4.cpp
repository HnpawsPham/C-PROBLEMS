#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int sum=0;
    cout<<"hay nhap vao mot chuoi: ";
    cin>>str;

    for(int i=0; i<str.length()-1; i++){
        if(str[i]=='i' && str[i+1]=='t'){
            sum++;
        }
    }

    cout<<"so chuoi con it trong chuoi tren la: "<<sum;
}