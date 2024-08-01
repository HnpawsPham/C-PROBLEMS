#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAI2.INP");

string str;
int cnt[1000000];

int main(){
    fi>>str;
    memset(cnt, false, sizeof(cnt));

    for(int i=0; i<str.length(); i++){
        cnt[int(tolower(str[i]) - '0')]++;
    }

    for(int i=0; i<=255; i++){
        if(cnt[i] != 0){
            cout<<char(i + 48)<<" "<<cnt[i]<<endl;
        } 
    }

    fi.close();
}