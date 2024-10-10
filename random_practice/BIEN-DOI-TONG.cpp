#include <bits/stdc++.h>
using namespace std;
#define el "\n"

string str;
int m, len, cnt = 0;
vector<string> res;

int getSum(string s){
    int sum = 0;
    int n = s.length();
    int d = 1;
    string ss = "";

    for(int i = 0; i<n; i++){
        if(!isdigit(s[i])){
            if(!ss.empty()) sum += stoi(ss) * d;
            ss = "";
            if(s[i] == '-') d = -1;
            else d = 1;
        }
        else ss += s[i];
    }
    
    if(!ss.empty()) sum += stoi(ss) * d;
    return sum;
}

void solve(int i, string s){
    if(i == len){
        if(getSum(s) == m){
            cnt++;
            res.push_back(s);
        }
        return;
    }

    if(i > 0){
        solve(i + 1, s + '+' + str[i]);
    }
    solve(i + 1, s + '-' + str[i]);
    solve(i + 1, s + str[i]);
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str>>m;
    len = str.length();
    solve(0, "");

    cout<<cnt<<el;
    for(string x : res) cout<<x<<el;

    return 0;
}