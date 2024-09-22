#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n;
ll k;

int main(){
    freopen(".\\txt\\SIGNAL.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;
    string str, res = "";
    cin>>str;
    int pos = k % str.length() + 1;
    res = str.substr(pos) + str.substr(0, pos);
    cout<<res<<el;
    return 0;
}