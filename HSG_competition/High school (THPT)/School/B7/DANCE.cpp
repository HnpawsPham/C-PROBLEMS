#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define pii pair<int, int>

int n, m, k;
const int maxn = 100005;
const int maxw = 999999;
int parent[maxn], sz[maxn], pos[maxn];
vector<vector<pii>> a(maxn);

void dijkstra(){
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<int> dis(n + 1, maxw);
    int des[n + 1], minn[n + 1];

    for(int i =1 ;i<=n;i++) minn[i] = maxw;
    for(int i = 1; i<=k;i++){
        dis[pos[i]] = 0;
        des[pos[i]] = pos[i];
        pq.push({0, pos[i]});
    }

    while(!pq.empty()){
        pii cur = pq.top();
        pq.pop();

        int u = cur.second;
        int w = cur.first;

        if(w > dis[u]) continue;

        for(pii x : a[u]){
            int v = x.second;
            int w1 = x.first;

            if(dis[u] + w1 < dis[v]){
                dis[v] = dis[u] + w1;
                cout<<v<<el;
                pq.push({dis[v], v});
            }
        }
    }
    for(int i = 1; i<=n;i++) cout<<dis[i]<<" ";
    cout<<el;
    return;
}

int main(){
    freopen(".\\txt\\DANCE.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m>>k;
    for(int i = 1; i<=k;i++) cin>>pos[i];
    for(int i = 0; i<m;i++){
        int u, v, w;
        cin>>u>>v>>w;
        a[u].push_back({w, v});
        a[v].push_back({w,u});
    }
    dijkstra();

    return 0;
}

