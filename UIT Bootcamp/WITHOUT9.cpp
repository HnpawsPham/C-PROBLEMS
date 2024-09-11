#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define MOD 1000000007

string a, b;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>a>>b;
    ll la = 0, lb = 0;
    for(char x : a) la = la * 9 + int(x - '0');
    for(char x : b) lb = lb * 9 + int(x - '0');
    cout<<lb - la + 1<<el;

    return 0;
}