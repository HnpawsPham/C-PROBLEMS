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
    fstream fi,out;
    fi.open("./txtFiles/in4.txt");
    out.open("./txtFiles/out4.txt");
    int n=0;
    fi>>n;
    for(int i=2;i<=n;i++){
        if(ngto(i)){
            out<<i<<", ";
        }
    }
}