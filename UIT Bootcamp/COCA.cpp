#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

string str;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str;
    int cnt = 0;
    for(int i = 1; i<str.length(); i++){
        if(str[i] != str[i - 1]) cnt++;
    }

    if(cnt % 2 == 0 || cnt == 0){
        cout<<"Lose"<<el;
        return 0;
    }
    cout<<"Win"<<el;

    return 0;
}