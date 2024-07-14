#include <bits/stdc++.h>
using namespace std; 

fstream fi(".\\txt\\BAI3.INP"),
        out(".\\txt\\BAI3.OUT");

string str;
int kq=0;

void xuli(string str, int &kq){
    int alphabet=0, digit=0;
    for(int i=0; i<str.length(); i ++){
        if(isalpha(str[i])){
            alphabet++;
        }
        else{
            digit++;
        }
    }
    if(digit != alphabet){
        kq++;
        cout<<str<<endl;
    }
}

int main(){
    fi>>str;
    string temp= "";

    for(int i=0; i<str.length(); i++){
        for(int j=i; j<str.length(); j++){
            temp+=str[j];
            if(temp.length()>1){
                xuli(temp,kq);
            }
        }
        temp="";
    }

        out<<kq;

    fi.close();
    out.close();
}


