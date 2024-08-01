#include <iostream>
#include<fstream>
using namespace std;

int ngto(int value){
    int sum=0;
    if(value==1){
        return false;
    }
    for (int i=2; i< value; i++){
        if(value%i==0){
            sum++;
        }
    }
    if (sum==0){
        return true;
    }
    return false;
}

int main(){
    fstream fi,out;
    fi.open(".\\txtFiles\\in9.txt");
    out.open(".\\txtFiles\\out9.txt");
    int n,s1,s2,s3;
    n=0;
    s1=0;
    s2=1;
    s3=0;
    fi>>n;
    
    while (s3<n){
        s3=s1+s2;
        s1=s2;
        s2=s3;
        if(ngto(s3)){
            out<<s3<<endl;
        }
    }
}