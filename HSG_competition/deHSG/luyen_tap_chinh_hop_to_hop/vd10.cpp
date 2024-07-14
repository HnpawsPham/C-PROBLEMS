#include <bits/stdc++.h>
using namespace std;

double giaithua (int n){
    if(n==1){
        return 1;
    }
    cout<<n<<" ";
    return n*giaithua(n-1);
}
// Bài 10: Trong mặt phẳng có 18 điểm phân biệt trong đó không có ba điểm nào thẳng hàng

int main(){
    cout<<"co "<<giaithua(18) / (giaithua(15)*giaithua(3))<<" cach";
}