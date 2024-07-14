#include <bits/stdc++.h>
using namespace std;

double giaithua(int n){
    if(n==1){
        return 1;
    }
    return n* giaithua(n-1);
}
//Bài 3: Một túi đựng 6 bi trắng, 5 bi xanh. 
// Lấy ra 4 viên bi từ túi đó. Hỏi có bao nhiêu 
// cách lấy mà 4 viên bi lấy ra có đủ hai màu.

int main(){
    // có tổng cộng 11 viên bi
    // lấy 4 viên bi là 4 chập 11
    // có 3 cách lấy bi trắng là C 3 chập 6 để có cả bi trắng
    // có 3 cách lấy bi xanh là C 3 chập 5 để có cả bi xanh

    cout<<"Co "<<(giaithua(11)/(giaithua(4)*giaithua(7))) - (giaithua(6)/(giaithua(3)*giaithua(3))) + (giaithua(5)/(giaithua(2) * giaithua(3))) <<" cach";
}