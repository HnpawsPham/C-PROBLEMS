#include <bits/stdc++.h>
using namespace std;

int giaithua(int n){
    if(n==1){
        return 1;
    }
    return n* giaithua(n-1);
}
// a) Từ tập A = {1; 2; 3; 4; 5; 6; 7; 8; 9}, lập được bao nhiêu số có bốn chữ số khác nhau?
    // b)Có bao nhiêu số có bốn chữ số khác nhau?
int main(){
    // có 4! cách xếp 4 chữ số 
    // có 9 số
    cout<<"a)co "<<giaithua(9)/ giaithua(4)<<" cach"<<endl;

    // chữ số đầu tiên nằm trong khoảng từ 1 - 9
    // các chữ số còn lại từ 0-8 => A 3 chập 9
    cout<<"a)co "<<9*giaithua(9)/giaithua(7)<<" cach";
}