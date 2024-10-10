#include <bits/stdc++.h>
using namespace std;
#define el "\n"

string str;

int solve(int l, int prev, int i, int num){
    int x = stoi(str.substr(l, prev - l + 1));
    int y = stoi(str.substr(prev + 1, i - prev));
    
    if(x + y == str[num]){
        solve(i, i + 1, i + 2, i + 3);
    }
    else{

    }
    return 0;
}

int main(){
    freopen(".\\txt\\ADDITIVE-NUMBER.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str;
    
    if(str.length() < 3){
        cout<<"false"<<el;
        return 0;
    }

    solve(0, 0, 1, 2);


    return 0;
}