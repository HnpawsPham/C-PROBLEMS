#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

ll m;
double maxx = 0;
int n;
string str = "";

void solve(int i, double s){
    if(i == n){
        if(s > maxx && s <= m){
            maxx = s;
        }
        return;
    }

    solve(i + 1, s + int(str[i] - '0'));
    solve(i + 1, s - int(str[i] - '0'));
    solve(i + 1, s * int(str[i] - '0'));
    solve(i + 1, s / int(str[i] - '0'));
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>m>>n;
    for(int i = 0; i<n;i++){
        char ch;
        cin>>ch;
        str += ch;
    }
    solve(0, 0);
    cout<<fixed<<setprecision(3)<<(double)maxx<<el;

    return 0;
}