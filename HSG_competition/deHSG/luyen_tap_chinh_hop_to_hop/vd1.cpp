#include <bits/stdc++.h>
using namespace std;

// Bài 1: Sắp xếp năm bạn học sinh An, Bình, Chi, Dũng, Lệ 
// vào một chiếc ghế dài có 5 chỗ ngồi. Số cách sắp xếp sao cho 
// bạn Chi luôn ngồi chính giữa là

int giaithua(int n){
    if(n==1){
        return n=1;
    }
    return n* giaithua(n-1);
}

int main(){
    // do bạn chi luôn ngồi chính giữa nên có 1 cách xếp bạn chi
    // các bạn còn lại có 4 cách xếp
    // => 4! + 1!
    cout<<"Co "<<giaithua(4)*1<<" cach xep!";
}