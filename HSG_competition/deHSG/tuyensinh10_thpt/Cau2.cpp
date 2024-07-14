#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\CAU2.INP");

int n,k;
int sc[100000000];      //mảng này để lưu số cách của i trước

int quyhoachdong() {
    sc[0] = 1;          // ban đầu luôn có 1 cách, đó là 1+1+...+1 = n (k luôn lớn hơn 0)

    for(int i=1; i<=n; i++){                //số nhỏ nhất là 1, lớn nhất là n nên chạy từ 1 tới n
        for(int j=1; j<=k && j<=i; j++){    // i=1 thì k=1; i=3 thì k= 1+1+1 = 3; (đảm báo j<=k phù hợp đề bài, j<=i để tránh số âm ở sc[i-j])
            sc[i] += sc[i-j];               // cộng dồn số các cách phía trước
        }
    }

    return sc[n];                           // số cách cuối cùng  = số các cách từ ki=1 tới i=k
}

int main(){
    fi>>n>>k;

    cout<<quyhoachdong()<<endl;
}