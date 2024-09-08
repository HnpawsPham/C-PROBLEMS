#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define tiii tuple<int, int, int>
#define pii pair<int, int>

int n, m, k;
const int maxn = 3001;
vector<vector<int>> a(maxn);
set<tiii> forbidden;

void bfs(int x){
    queue<pii> q;
    bool check[n + 1][n + 1] = {false};
    pii path[n + 1][n + 1];
    pii first = {0, x};
    q.push(first);

    while(!q.empty()){
        pii cur = q.front();
        int pu = cur.first;
        int u = cur.second;
        q.pop();

        if(u == n){
            vector<pii> res;
            while(cur != first){
                res.push_back(cur);
                cur = path[cur.first][cur.second];
            }
            res.push_back(first);

            cout<<res.size() - 1<<el;
            for(int i = res.size() - 1; i >= 0; i--){
                cout<<res[i].second<<" ";
            }
            return;
        }

        for(int v : a[u]){
            if(!check[u][v] && !forbidden.count({pu, u, v})){
                check[u][v] = true;
                q.push({u, v});
                path[u][v] = cur;
            }
        }
    }
    cout<<-1<<el;
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m>>k;
    for(int i = 0;i<m;i++){
        int u, v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i = 0; i < k ;i++){
        int a, b, c;
        cin>>a>>b>>c;
        forbidden.insert({a, b, c});
    }
    bfs(1);

    return 0;
}
