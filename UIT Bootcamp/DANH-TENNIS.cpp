#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

bool check(int a, int b){
    int cnt = 0;
    if(a >= 5 && b >= 5){
        if(a == 7) cnt++;
        if(b == 7) cnt++;
        return (cnt == 1) && (a <= 7 && b <= 7);
    }
    if(a == 6) cnt++;
    if(b == 6) cnt++;
    return (cnt == 1) && (a <= 6 && b <= 6);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin>>a>>b;
    cout<<check(a, b)<<el;

    return 0;
}