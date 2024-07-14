#include <iostream>
using namespace std;

int main(){
    int n,num;
    num=0;
    cout<<"Value of n: ";
    cin >>n;
    for (int i=1;i<n;i++){
        if(n%i==0){
            num+=1;
        }
    }
    cout<< "all n's divisors: "<< num;
}