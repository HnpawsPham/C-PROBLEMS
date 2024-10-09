#include <bits/stdc++.h>
using namespace std;
#define el "\n"

string str;

void solve(int i, string num, int sum){
    if(sum != stoi(num)){
        
    }
    return;
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

    solve(2, "" + str[2], 0);


    return 0;
}