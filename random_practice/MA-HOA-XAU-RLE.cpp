#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

ll k;
string str;

int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    cin>>k>>str;
    char maxchar = '.';
    ll cntchar = 0;

    while(k > 0){
        for(int i = 0; i<str.length(); i++){
            if(isdigit(str[i])) continue;

            if(str[i] > maxchar){
                maxchar = char;
                
            }
        }
    }

    return 0;
}