#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define pii pair<int, int>

int n, m, d, k, res = 0;
const int maxn = 1e4 + 1;
char a[maxn][maxn];

int dy[] = {-1, 0, 0, 1},
    dx[] = {0, -1, 1, 0};

bool bfs(int i, int j){
    int cnt = 0;
    queue<pii> q;
    bool check[n + 1][m + 1] = {false};
    check[i][j] = true;
    q.push({i, j});

    while(!q.empty()){
        int i1 = q.front().first;
        int j1 = q.front().second;
        q.pop();

        for(int x = 0;x<4;x++){
            int i2 = i1 + dy[x];
            int j2 = j1 + dx[x];

            if(i2 < i - d || i2 > i + d || j2 < j - d || j2 > j + d || check[i2][j2]) continue;
            if(a[i2][j2] == 'M') cnt++;
            q.push({i2, j2});
            check[i2][j2] = true;
        }
    }
    
    if(cnt == k) return true;
    return false;
}

int main(){
    freopen(".\\txt\\KHUDANCU.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>m>>n>>d>>k;
    for(int i = 1;i<=n;i++){
        for(int j = 1; j<=m;j++){
            cin>>a[i][j];
        }
    }

    for(int i = 1;i<=n;i++){
        for(int j =1 ;j<=m;j++){
            if(a[i][j] != 'P') continue;
            if (bfs(i, j)) res++;
        }
    }
    cout<<res<<el;

    return 0;
}