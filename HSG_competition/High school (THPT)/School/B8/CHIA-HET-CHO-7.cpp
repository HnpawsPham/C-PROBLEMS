#include <bits/stdc++.h>
using namespace std;
#define el "\n"

string str;

int main(){
    freopen(".\\txt\\CHIA-HET-CHO-7.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str;
    int n =str.length();
    int t = 0, pos = -1, res = -1;
    int a[200];
    bool first = false;

    for(int i = 0; i<n; i++){
        if(str[i] == '?'){
            if(i == 0) first = true;
            pos = i + 1;
            continue;
        }
        t += (int(str[i] - '0') * (i + 1));
    }
    for(int i = 0 + first; i < 10; i++){
        if((t + i * pos) % 7 == 0){
            res = i;
            break;
        }
    }
    cout<<res<<el;
    return 0;
}