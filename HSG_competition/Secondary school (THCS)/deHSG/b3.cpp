#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main(){
    fstream fi;
    fi.open("./txtFiles/fi3.txt");
    int a,b,c,temp,sum;
    for (int i=100;i<=999;i++){
        temp=i;
        c=temp%10;
        temp/=10;
        b=temp%10;
        temp/=10;
        a=temp%10;
        sum=pow(a,3)+pow(b,3)+pow(c,3);
        if(sum==i){
            fi<<i<<"; ";
        }
    }
}