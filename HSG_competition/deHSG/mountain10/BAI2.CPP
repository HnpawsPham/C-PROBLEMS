#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAI2.INP"),
        out(".\\txt\\BAI2.OUT");

string saved[10000000];

int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

bool doixung(string str){
    int n = str.length();
    for(int i=0; i<n/2; i++){
        if(str[i] != str[n-i-1]){
            return false;
        }
    }

    return true;
}

int main(){
    int maxlen=0,cnt=0,i=0;

    while(!fi.eof()){
        string str;
        fi>>str;

        saved[i] = str;
        i++;

        if(doixung(str)){
            cnt++;
            maxlen = max(maxlen, str.length());
        }
    }

    out<<cnt<<endl;
    
    for(int j=0; j<i; j++){
        if(saved[j].length() == maxlen){
            out<<saved[j]<<endl;
        }
    }

    fi.close();
    out.close();
}