#include <bits/stdc++.h>
using namespace std;


// Bài 2: Có 3 viên bi đen khác nhau, 4 viên bi đỏ khác nhau, 5 viên bi xanh khác nhau.
//  Hỏi có bao nhiêu cách sắp xếp các viên bi trên thành một dãy sao cho các viên bi cùng màu ở cạnh nhau?


int giaithua(int n){
    if(n==1){
        return 1;
    }
    return n*giaithua(n-1);
}

int main(){
    // có tất cả 3 cách xếp viên bi đen, 4 cách xếp viên bi đỏ, 5 cách xếp viên bi xanh sao cho ở cạnh nhau
    // có tất cả 3 cách xếp các viên bi cùng laoji cạnh nhau
    // => 3! * 4! * 5! * 3!
    cout<<"Co tat ca "<<giaithua(3)*giaithua(4)*giaithua(5)* giaithua(3)<<" cach xep cac vien bi";

}