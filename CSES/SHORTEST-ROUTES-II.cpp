#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n, m, q;
const int maxn = 501;
ll dis[maxn][maxn];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m>>q;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i == j){
                dis[i][j] = 0;
                continue;
            }
            dis[i][j] = LLONG_MAX;
        }
    }
    for(int i = 0;i<m;i++){
        int u, v;
        ll w;
        cin>>u>>v>>w;
        dis[u][v] = dis[v][u] = min(dis[v][u], w);
    }

    for(int x = 1; x<=n;x++){
        for(int u = 1; u<=n;u++){
            for(int v = 1; v <= n;v++){
                if(dis[u][x] == LLONG_MAX || dis[x][v] == LLONG_MAX) continue;
                if(dis[u][x] + dis[x][v] < dis[u][v]){
                    dis[u][v] = dis[u][x] + dis[x][v];
                }
            }
        }
    }

    while(q--){
        int u, v;
        cin>>u>>v;
        if(dis[u][v] == LLONG_MAX){
            cout<<-1<<el;
            continue;
        }
        cout<<dis[u][v]<<el;
    }

    return 0;
}