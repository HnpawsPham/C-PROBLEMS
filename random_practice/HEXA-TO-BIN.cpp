#include <bits/stdc++.h>
using namespace std;
#define el "\n"

string str;

int getCh(char ch){
    int res = int(ch - '0');
    if(!isdigit(ch)) res -= 7;
    return res;
}

void toBin(int x){
    string res = "";
    while(x){
        if(x & 1) res = '1' + res;
        else res = '0' + res;
        x >>= 1;
    }
    cout<<setw(4)<<setfill('0')<<res;
    return;
}

void solve(){
    for(int i = 0; i<str.length(); i++){
        toBin(getCh(str[i]));
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str;
    solve();

    return 0;
}