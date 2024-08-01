#include <bits/stdc++.h>
using namespace std;

double giaithua (int n){
    if(n==1){
        return 1;
    }
    return n* giaithua(n-1);
}

// Bài 1: Có 5 bì thư khác nhau và có 8 con tem khác nhau. 
// Chọn từ đó ra 3 bì thư và 3 con tem sau đó dán 3 con tem lên
//  3 bì thư đã chọn. Biết rằng một bì thư chỉ dán 1 con tem. 
//  Hỏi có bao nhiêu cách dán?

int main(){
    // C 3 chập 5
    // C 3 chập 8
    cout<<"co "<<(giaithua(5)/ (giaithua(3)*giaithua(2))) * (giaithua(8)/(giaithua(3)*(giaithua(5)))) <<" cach";
}