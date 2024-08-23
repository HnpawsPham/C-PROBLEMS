#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

int n, m;
char a[101][101];
int path[101][101] = {0};

int dy[] = {-1, 0, 0, 1},
    dx[] = {0, -1, 1, 0};

int bfs(int i, int j){
    queue<pii> q;
    q.push({i, j});
    a[i][j] = '*';

    while(!q.empty()){
        pii current = q.front();
        q.pop();

        for(int x = 0;x<4;x++){
            int i1 = current.first + dy[x];
            int j1 = current.second + dx[x];

            if(i1 < 0 || i1 >=n || j1 < 0 || j1 >= m || a[i1][j1] == '*'){
                continue;
            }

            path[i1][j1] = path[current.first][current.second] + 1;
            q.push({i1, j1});
            a[i1][j1] = '*';
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    pii st, end;

    for(int i = 0;i<n;i++){
        for(int j =0;j<m;j++){
            cin>>a[i][j];

            if(a[i][j] == 'C'){
                st = make_pair(i, j);
            }
            else if(a[i][j] == 'B'){
                end = make_pair(i, j);
            }
        }
    }

    bfs(st.first, st.second);

    cout<<path[end.first][end.second]<<endl;

    return 0;
}