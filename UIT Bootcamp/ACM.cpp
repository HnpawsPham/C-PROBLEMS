#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n, m, res = 0;
const int maxn = 1004;
char a[maxn][maxn];
bool check[maxn][maxn];
string s = "ACM";

int dy[] = {-1, 0, 0, 1},
    dx[] = {0, -1, 1, 0};

void dfs(int i, int j, int nextpos){
    if(a[i][j] == s[nextpos]) nextpos++;
    else return;
    if(nextpos == s.length()){
        res++;
        nextpos = 0;
    }
    check[i][j] = true;

    for(int x = 0; x<4;x++){
        int i1 = i + dy[x];
        int j1 = j + dx[x];

        if(i1 < 0 || i1 >= n || j1 < 0 || j1 >= m || check[i1][j1]) continue;
        dfs(i1, j1, nextpos);
    }
    check[i][j] = false;
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i =0 ;i<n;i++){
        string str;
        cin>>str;
        for(int j = 0; j<m;j++){
            a[i][j] = str[j];
        }
    }

    for(int i =0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(a[i][j] != s[0]) continue;
            dfs(i, j, 0);
        }
    }
    cout<<res<<el;

    return 0;
}