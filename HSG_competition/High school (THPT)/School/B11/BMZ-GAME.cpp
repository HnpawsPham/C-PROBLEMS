#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007;
#define el "\n"

int m, n ,k;
ll cnt = 0;
const int maxn = 35;
char a[maxn][maxn];
bool visited[maxn][maxn] = {false};

bool check(string str){
    int t = 0, maxx = -1;
    for(int i = 0; i<str.length(); i++){
        if(str[i] == '(') t++;
        else t--;

        maxx = max(maxx, t);

        if(t < 0) return false;
    }
    return maxx == k;
}

void solve(int i, int j, string str, char dir){
    if(i == 1 && j == n){
        cout<<str<<el;
        cnt = (cnt + check(str)) % MOD;
        return;
    }
    if(i < 1 || j < 1 || i > n || j > n) return;
    else if(visited[i][j]) return;
    
    visited[i][j] = true;
    str += a[i][j];

    switch (dir)
    {
    case 'r':
        solve(i + 1, j, str, 'd');
        solve(i, j + 1, str, 'r');
        break;
    case 'l':
        solve(i -1, j, str, 'u');
        solve(i, j - 1, str, 'l');
        break;
    case 'u':
        solve(i - 1, j, str, 'u');
        solve(i, j + 1, str, 'r');
        break;
    case 'd':
        solve(i + 1, j, str, 'd');
        solve(i, j - 1, str, 'l');
    default:
        break;
    }

    return;
}

int main(){
    freopen(".\\txt\\BMZ-GAME.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m>>k;
    for(int i = 1; i<=n;i++){
        string str;
        cin>>str;
        for(int j = 0; j<m;j++){
            a[i][j + 1] = str[j];
        }
    }
    solve(1, 1,"", 'r');
    cout<<cnt<<el;

    return 0;
}