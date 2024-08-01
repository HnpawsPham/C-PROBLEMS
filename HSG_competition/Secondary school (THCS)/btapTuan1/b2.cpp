#include <iostream>
using namespace std;

int main(){
    int n,tich;
    tich=1;
    cout << "Nhập n: ";
    cin >> n;
    for (int i=1;i<n;i++){
        if(n%i==0){
            tich=tich*i;
        }
    }
    cout << tich;
}