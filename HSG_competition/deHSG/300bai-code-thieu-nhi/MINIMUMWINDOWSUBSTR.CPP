#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\MINIMUMWINDOWSUBSTR.INP");

string str,t, res;
int cnt, minlen = 1e6;

int min(int a, int b){
    if(a<b){
        return a;
    }
    return b;
}

void check(string str){
    cnt= 0;

    for(int i=0; i<str.length(); i++){
        for(int j=0; j<t.length(); j++){
            if(str[i] == t[j]){
                cnt++;
            }
        }
    }

    if(cnt == t.length()){
        res = str;
        if(str.length() < minlen){
            res = str;
        }
    }
}

int main(){
    fi>>str>>t;

    if(t == str){
        cout<<str<<endl;
    }

    for(int len = t.length(); len <=str.length(); len++){
        for(int i=0; i<len; i++){
            check(str.substr(i,len));
        }
    }

    cout<<res<<endl;
}