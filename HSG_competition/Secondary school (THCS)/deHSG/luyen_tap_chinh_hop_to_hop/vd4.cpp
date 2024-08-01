#include <bits/stdc++.h>
using namespace std;

int giaithua (int n){
    if(n==1){
        return 1;
    }
    return n* giaithua(n-1);
}

// Bài 4: Trong một ban chấp hành đoàn gồm 7 người, cần chọn ra 3 người
//  vào ban thường vụ. Nếu cần chọn ban thường vụ gồm ba chức vụ bí thư,
//   phó bí thư, ủy viên thường vụ thì có bao nhiêu cách chọn?

int main(){
    // A 3 chập 7 => 7! / (7-3)!
    cout<<"Co tat ca "<<giaithua(7)/giaithua(7-3)<<" cach";
}