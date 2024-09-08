#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n;
string str;

int main(){
    freopen(".\\txt\\CHENHLECH.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    int cnt[255];
    memset(cnt, 0, sizeof(cnt));
    cin>>str;
    for(int i = 0;i<n;i++){
        cnt[int(str[i] - '0')]++;
    }
    int maxx = 0, minn = n + 1;
    for(int x : cnt){
        maxx = max(maxx, x);
        if(x > 0 && x < minn) minn = x;
    }
    cout<<maxx- minn<<el;

    return 0;
}