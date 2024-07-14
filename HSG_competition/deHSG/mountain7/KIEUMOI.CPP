#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\KIEUMOI.INP"),
        out(".\\txt\\KIEUMOI.OUT");

int n;

string toSnakeCase(string str){
    int i=0;
    string res = "";
    while(i<str.length()){
        if(tolower(str[i]) != str[i]){
            char ch = tolower(str[i]);
            if(i>0){
                res=res + '_' + ch;
            }
            else{
                res=res + ch;
            }
            
        }
        else{
            res=res + str[i];
        }

        i++;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    fi>>n;
    while(n--){
        string str;
        fi>>str;
        cout<<toSnakeCase(str)<<endl;
        out<<toSnakeCase(str)<<endl;
    }

    fi.close();
    out.close();
}