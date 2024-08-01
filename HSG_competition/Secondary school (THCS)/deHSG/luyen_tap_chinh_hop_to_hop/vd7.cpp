#include <bits/stdc++.h>
using namespace std;

int giaithua(int n){
    if(n==1){
        return 1;
    }
    return n * giaithua(n-1);
}
// Bài 7: Trong mặt phẳng, cho 6 điểm phân biệt sao 
// cho không có ba điểm nào thẳng hàng. Hỏi có thể lập
//  được bao nhiêu tam giác mà các đỉnh của nó thuộc tập điểm đã cho?
int main(){
    // 6! / 3! * 3!
    cout<<"co tat ca "<<giaithua(6)/(giaithua(3)*giaithua(3))<<" tam giac";
}