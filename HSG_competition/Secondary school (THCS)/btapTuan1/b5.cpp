#include <iostream>
using namespace std;
int main(){
    int a,b,ucln;
    cout<<"Value of a: ";
    cin>>a;
    cout<<"Value of b: ";
    cin>>b;
    if (a>b){
    for (int i=1;i<=a;i++){
        if (a%i==0 && b%i==0){
            ucln=i;
        }
    }}
    else{
        for (int i=1;i<=b;i++){
        if (a%i==0 && b%i==0){
            ucln=i;
        }
    }
   }
   cout<< "UCLN cua a va b la: "<<ucln;
}