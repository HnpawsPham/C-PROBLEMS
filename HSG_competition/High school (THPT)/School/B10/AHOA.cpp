#include <bits/stdc++.h>
using namespace std;
#define el "\n"

string str;

int main(){
    freopen(".\\txt\\AHOA.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str; 
    int res = 0;
    int n = str.length();
    bool cnt[100] = {false};

    for(int i = 0; i< n;i++){
        int t = int(str[i] - '0');
        if(t >= 17 && t <= 42 && !cnt[t]){
            res++;
            cnt[t] = 1;
        }
    }
    cout<<res<<el;
    
    return 0;
}