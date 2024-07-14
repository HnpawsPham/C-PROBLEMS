#include <bits/stdc++.h>
using namespace std;

int giaithua(int n){
    if(n==1){
        return 1;
    }
    return n* giaithua(n-1);
}

// Bài 3: Có bao nhiêu cách xếp khác nhau cho 4 người ngồi vào 6 chỗ trên một bàn dài?

int main(){
    // A 4 chập 6 = 6! / (6-4)!

    cout<<"Co tat ca "<<giaithua(6)/giaithua(6-4)<<" cach";
}