#include <bits/stdc++.h>
using namespace std;
#define el "\n"

string str;
int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>str;
    cin>>n;
    int m = str.length();
    int res = m;
    unordered_map<char, int> mp, cnt;

    while(n--){
        char ch;
        cin>>ch>>mp[ch];
    }

    for(int i = 0; i<m;i++){
        if(mp.count(str[i])) cnt[str[i]]++;
    }
    for(auto x : cnt){
        res += (x.second + mp[x.first] - 1) / x.second;
    }
    cout<<res<<el;

    return 0;
}