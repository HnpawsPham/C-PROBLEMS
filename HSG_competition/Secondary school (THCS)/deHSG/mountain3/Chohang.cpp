#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\CHOHANG.INP"),
        out(".\\txt\\CHOHANG.OUT");

int n,a,b,kq=0;

bool goodcase(int &kq){
    if(n%a == 0 || n%b == 0){
        kq=n;
        return true;
    }
    return false;
}

void badcase(int n, int &kq){
    int maxa = n/a;

    for(int numa=maxa; numa>=0; numa--){
        int remain = n-numa*a;
        int numb = remain / b;

        // so sánh số lượng chở được giữa các trường hợp, lấy max
        int temp = numa*a + numb*b;
        kq = max(kq,temp);
        // cout<<kq<<" "<<numa<<" "<<numb<<endl;
    }
}

int main(){
    fi>>n>>a>>b;

    if(!goodcase(kq)){
        badcase(n,kq);
    }

    out<<kq<<endl;

    fi.close();
    out.close();
}