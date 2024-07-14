#include <bits/stdc++.h>
using namespace std;

string str;

int main(){
    cin>>str;
    int cnt = 0;

    for(int i=0; i<str.length(); i++){
        if(str[i] == '(' && str[i+1] != ')' ||
           str[i] == '[' && str[i+1] != ']' ||
           str[i] == '{' && str[i+1] != '}'){

            cout<<"false"<<endl;
            break;
        }
        else if(str[i] == ')' && str[i-1] != '(' ||
                str[i] == ']' && str[i-1] != '[' ||
                str[i] == '}' && str[i-1] != '{'){

            cout<<"false"<<endl;
            break;
        }
        cnt++;
    }

    if(cnt == str.length()){
        cout<<"true"<<endl;
    }
}