#include <bits/stdc++.h>
using namespace std;

int giaithua(int n){
    if(n==1){
        return 1;
    }
    return n*giaithua(n-1);
}
// Cắm 3 bông hoa giống nhau, mỗi bông vào 1 lọ nên ta sẽ lấy 3 lọ bất kỳ trong 5 lọ khác nhau để cắm bông.
 int main(){
    // 5! / (5-3)! * 3!
    cout<<"co tat ca "<<giaithua(5)/ (giaithua(2)*giaithua(3))<<" cach";
 }