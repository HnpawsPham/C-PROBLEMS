#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\XINCHAO.INP"),
        out(".\\txt\\XINCHAO.OUT");

int n;
string key;
string str;

void xuli(string &str){
    int j=0;
    string temp = "";

    for(int i=0; i<str.length(); i++){
        if(temp == key){
            break;
        }
        if(str[i] == key[j]){
            j++;
            temp=temp +str[i];
        }

        if(str[i] != str[str.find(str[i])]){
            str.erase(remove(str.begin(), str.end(), str[i]),str.end());
        }
    }
    str = temp;
}

void check(string str){
    if(str == key){
        out<<"YES"<<endl;
    }
    else{
        out<<"NO"<<endl;
    }
}

int main(){
    fi>>n;
    fi>>key;

    for(int i=0; i<n; i++){
        fi>>str;
        xuli(str);
        check(str);
    }
}