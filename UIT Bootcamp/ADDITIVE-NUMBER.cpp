#include <bits/stdc++.h>
using namespace std;
#define el "\n"

string str;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str;
    if(str.length() < 3){
        cout<<"false"<<el;
        return 0;
    }

    for(int i = 2; i <str.length(); i++){
        if(int(str[i] - '0') != int(str[i - 1] - '0') + int(str[i - 2] - '0')){
            cout<<"false"<<el;
            return 0;
        }
    }
    cout<<"true"<<el;

    return 0;
}