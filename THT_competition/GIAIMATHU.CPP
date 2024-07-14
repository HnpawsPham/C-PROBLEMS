#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\GIAIMATHU.INP");

int n;
string str;

void reverse(string &str){
    char ch;

    for(int i=0; i<str.length()/2; i++){
        ch = str[i];
        str[i] = str[str.length()-i-1];
        str[str.length()-i-1] = ch;
    }
}

int main(){
    fi>>n;
    fi>>str;

    int i=0;

    while(i<n){
        if(isdigit(int(str[i])) == 1){
            if(int(str[i] - 48) == 1){
                while(isdigit(int(str[i+1])) == 0 && i<n){
                    i++;
                    cout<<str[i];
                }
                cout<<" ";
            }
            else{
                string t="";
                while(isdigit(int(str[i+1])) == 0 && i<n){
                    i++;
                    t+=str[i];
                }
                reverse(t);
                cout<<t<<" ";
            }
        }
        i++;
    }
}