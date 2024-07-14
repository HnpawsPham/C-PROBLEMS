#include <bits/stdc++.h>
using namespace std;

int reverse(int value,int t){
    if(value==0){
        return 0;
    }
    return (value%10*t +reverse(value/100,t));
}
int main(){
    fstream out;
    out.open(".\\txtFiles\\out8.txt");
    
    for(int i=100000; i<= 999999; i++){
        if(i/1000 == reverse(i%1000,100)){
            out<<i<<endl;
        }
    }
    out.close();
}