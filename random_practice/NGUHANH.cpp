#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\NGUHANH.INP"),
        out(".\\txt\\NGUHANH.OUT");

string str;
int kq = 0,k;

int giaithua(int num){
    if(num<=1){
        return 1;
    }
    return num * giaithua(num-1);
}

bool isDivisible(int num){
    if(num%10 == 5 || num%10 == 0){
        return true;
    }
    return false;
}

void remove(int &kq){
    string temp = "";
    for(int i=0; i<str.length();i++){
        for(int j=i;j<str.length();j++){
            temp+=str[j];
            cout<<temp<<" is "<<isDivisible(stoi(temp))<<endl;
            if(isDivisible(stoi(temp))){
                kq++;
            }
        }
        temp = "";
    }
}

int main(){
    fi>>str;
    fi>>k;

    // nối xâu
    for(int i=0; i<k-1; i++){
        str+=str;
    }

    remove(kq);

    cout<<pow(2,5)-1<<endl;

    out<<kq;
}