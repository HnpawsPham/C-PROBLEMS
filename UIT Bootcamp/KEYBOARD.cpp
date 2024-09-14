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
    int m = str.length();
    unordered_map<char, int> cnt;
    for(int i = 0; i < m; i++){
        cnt[str[i]]++;
    }
    cin>>n;
    int res = 0;
    while(n--){
        char ch;
        int t;
        cin>>ch>>t;
        t--;
        res += (cnt[ch] + t - 1)/t;
    }
    cout<<res + m<<el;

    return 0;
}