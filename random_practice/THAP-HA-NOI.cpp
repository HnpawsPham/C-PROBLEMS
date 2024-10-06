#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

void solve(char a, char b, char c, int s){
    if(s == 0) return;

    solve(a, c, b, s - 1);
    cout<<"Move disk "<< s<<" from "<<a<<" to "<<b<<el;
    solve(c, b, a, s - 1);
    
    return;
}

ll customPow(int a, int b){
    if(b == 0) return 1;
    if(b % 2 == 0) return customPow(a, b / 2) * customPow(a, b / 2);
    else return customPow(a, b / 2) * customPow(a, b / 2) * a;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;

    solve('A', 'C', 'B', n);
    cout<<customPow(2, n) - 1<<el;
    return 0;
}