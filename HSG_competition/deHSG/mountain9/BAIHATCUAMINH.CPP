#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAIHATCUAMINH.INP");

int n,q;
string str;


int stt(char ch){
    return int(ch-96);
}

void findLength(int start, int end){
    int len=0;
    for(int i=start; i<=end; i++){
        len+=stt(str[i]);
    }

    cout<<len<<endl;
}

int main(){
    fi>>n>>q;
    fi>>str;
    str = 'x'+str;

    for(int i=0; i<q; i++){
        int l,r;
        fi>>l>>r;
        findLength(l,r);
    }
}