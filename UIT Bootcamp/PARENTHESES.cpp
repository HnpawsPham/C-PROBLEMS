#include <bits/stdc++.h>
using namespace std;
#define el "\n"

string str, res = "";

bool check(string s){
    int cnt = 0;
    for(char x : s){
        if(x == '(') cnt++;
        else cnt--;

        if(cnt < 0) return false;
    }
    return cnt == 0;
}

void solve(int st, string s){
    if(check(s)){
        if(s.length() > res.length() || (s.length() == res.length() && s < res)){
            res = s;
        }
    }

    for(int i = st; i<str.length();i++){
        solve(i + 1, s + str[i]);
        solve(i + 1, s);
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str;
    solve(0, "");
    cout<<res.length()<<el<<res<<el;

    return 0;
}