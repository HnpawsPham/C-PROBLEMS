#include <bits/stdc++.h>
using namespace std;

int giaithua(int n){
    if(n==1){
        return 1;
    }
    return n* giaithua(n-1);
}

// Bài 8: Một tổ có 4 học sinh nam và 5 học sinh nữ
// a) Hỏi có bao nhiêu cách xếp học sinh trong tổ thành một hàng dọc?
// b) Hỏi có bao nhiêu cách xếp học sinh trong tổ thành hàng dọc sao cho học sinh nam và nữ đúng xen kẽ nhau?
int main(){
    //  tổng học sinh là 9
    // 9! / 1!
    cout<<"a) co "<<giaithua(9)<<" cach"<< endl;

    // có 4 cách xếp hs nam, 5 cách xếp hs nữ
    cout<<"b) co "<<giaithua(4)*giaithua(5)<<" cach" ;
}