// ucln=a.b/bcnn
//=> bcnn=a.b/ucln
#include <iostream>
using namespace std;
int main(){
    int a,b,bcnn,ucln;
    cout<<"Value of a: ";
    cin>>a;
    cout<<"value of b: ";
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
//    tìm bcnn
   if (ucln==0){
        bcnn=a*b;
   }
   else{
   bcnn=(a*b)/ucln;
   }
   cout<<"BCNN cua a va b la: "<<bcnn;
}