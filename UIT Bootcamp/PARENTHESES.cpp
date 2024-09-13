#include <bits/stdc++.h>
using namespace std;
#define el "\n"

string str;

bool check(int t){
    bool ok = true;
    for(int i = 0; i < t; i+= 2){
        if(str[i] == '(' && str[t - i - 1] == ')') ;
        if(str[i] != '(' || str[i + 1] != ')') ok = false;
    }

    return ok;
}

void solve(int t){
    if(check(t)){
        cout<<t<<el;
        for(int i = 0; i<t;i++){
            cout<<str[i];
        }
        return;
    }

    solve(t - 1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str;
    int len = str.length();
    solve(len);

    return 0;
}