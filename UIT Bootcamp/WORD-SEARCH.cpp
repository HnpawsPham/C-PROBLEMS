#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n = 0,m = 0;
string str, s;
const int maxn = 10;
char a[maxn][maxn];
bool check[maxn][maxn] = {false};

int dy[] = {-1, 0, 0, 1},
    dx[] = {0, -1, 1, 0};

bool dfs(int i, int j, int nextpos){
    if(a[i][j] == str[nextpos]) nextpos ++;
    else return false;
    
    if(nextpos == str.length()) return true;

    check[i][j] = true;

    for(int x = 0; x<4;x++){
        int i1 = i + dy[x];
        int j1 = j + dx[x];
        if(i1 < 0 || i1 >= n || j1 < 0 || j1 >= m || check[i1][j1]) continue;
        if(dfs(i1, j1, nextpos)) return true;
    }
    check[i][j] = false;
    return false;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    getline(cin, s);
    int x = 0, y = 0;
    for(int i = 0; i<s.length();i++){
        if(isalpha(s[i])){
            a[x][y] = s[i];
            y++;
        }
        if(s[i] == ']'){
            n++;
            x++;
            m = max(m, y);
            y = 0;
        }
    }
    n--;
    cin>>str;

    for(int i = 0; i<n;i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] != str[0]) continue;
            if(dfs(i, j, 0)){
                cout<<"true"<<el;
                return 0;
            }
        }
    }
    cout<<"false"<<el;

    return 0;
}