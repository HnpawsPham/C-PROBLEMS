#include <bits/stdc++.h>
using namespace std;
#define el "\n"

string str;
int n, cnt = 0;

void solve(int i, int s, string res){
    if(i == str.length()){
        if(s == n){
            for(int i = 1; i<res.length(); i++) cout<<res[i];
            cout<<el;
            cnt++;
        }
        return;
    }

    solve(i + 1, s - int(str[i] - '0'), res + '-' + str[i]);
    solve(i + 1, s + int(str[i] - '0'), res + '+' + str[i]);
    solve(i + 1, s, res);
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str;
    cin>>n;
    solve(0, 0, "");

    return 0;
}