#include <iostream>
using namespace std;

int main(){
    int n,oddNum;
    oddNum=0;
    cout<< "Value of n: ";
    cin>>n;
    for (int i=1;i<n;i++){
        if(n%i==0){
            if (i%2==0){
                oddNum++;
            }
        }
    }
    cout<< "number of n's odd divisors: "<< oddNum;
}