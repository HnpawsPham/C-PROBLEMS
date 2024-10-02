#include <bits/stdc++.h>
using namespace std;
#define el "\n"

string str;
int n, cnt = 0;

void solve(int i, int s){
    if(i == str.length()){
        if(s == n) cnt++;
        return;
    }

    solve(i + 1, s + int(str[i] - '0'));
    solve(i + 1, s - int(str[i] - '0'));
    solve(i + 1, s);
    
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str>>n;
    solve(0, 0);
    cout<<cnt<<el;
    return 0;
}