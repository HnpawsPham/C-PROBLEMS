#include <bits/stdc++.h>
#include <cmath>
using namespace std;
  
int checkNgto(int n){
    if(n == 0){
        return false;
    }

    int sum = 0;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            sum++;
        }
    }
    if(sum == 0){
        return true;
    }
    return false;
}

// kiểm tra xem số đó có đẹp k
int beautyCheck(int n){
    int sum = 0;

    while(n>0){
        sum+= pow(n%10,2);
        n = n/10;
    }
    if(checkNgto(sum)){
        return true;
    }
    return false;
}

int getOrder(int order){
    int i = 0;
    int num = 11;
    
    while(i != order){
        if(beautyCheck(num)){
            i++;
        }
        num++;  
    }
    return (num-1);
}

int main(){
    fstream fi, out;
    fi.open(".\\datas\\BEAUTY.INP");
    out.open(".\\datas\\BEAUTY.OUT");

    while(!fi.eof()){
        int stt = 0;

        fi>>stt;
        out<<getOrder(stt)<<endl;
    }
    
    fi.close();
}