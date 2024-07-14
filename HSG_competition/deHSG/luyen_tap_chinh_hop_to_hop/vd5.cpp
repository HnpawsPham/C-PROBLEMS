#include <bits/stdc++.h>
using namespace std;

int giaithua(int n){
    if(n==1){
        return 1;
    }
    return n* giaithua(n-1);
}
// Bài 5: Một lớp học có 20 học sinh gồm 25 nam và 15 nữ. 
// Chọn 3 học sinh để tham gia vệ sinh công cộng toàn trường,
//  hỏi có bao nhiêu cách chọn như trên?

int main(){
    // A 3 chập 7 => 7! / (7-3)!
    cout<<"Co tat ca "<<giaithua(20)/(giaithua(17)*giaithua(3))<<" cach";
}