#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAI6.INP");

int n;
long long l[1000000];

int main(){
    fi>>n;
    long long minn = 1e18; // do k thanh gỗ có độ dài bằng nhau nên tìm min của mảng
    for(int i=0; i<n; i++){
        fi>>l[i];
        minn = min(minn, l[i]);
    }

    cout<<minn<<endl;
}