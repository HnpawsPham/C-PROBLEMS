#include <bits/stdc++.h>
using namespace std;

int ngto(int value){
    int sum=0;
    for(int i=2;i<value;i++){
        if(value%i==0){
            sum++;
        }
    }
    if(sum==0){
        return true;
    }
    return false;
}
int main(){
    fstream out;
    out.open("./txtFiles/out5.txt");
    int n=0;
    for(int i=10000;i<=99999;i++){
        if(ngto(i)){
            out<<i<<", ";
        }
    }
}