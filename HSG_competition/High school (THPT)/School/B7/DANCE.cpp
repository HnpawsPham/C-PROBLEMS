#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define pii pair<int, int>

int n, m, k;
const int maxn = 100005;
const int maxw = 999999;
int pos[maxn], cnt[maxn];
vector<vector<pii>> a(maxn);

void dijkstra(){
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<int> dis(n + 1, maxw);
    int des[n + 1];

    for(int i = 1; i<=k;i++){
        dis[pos[i]] = 0;
        pq.push({0, pos[i]});
    }
    for(int i = 1; i<=n;i++) des[i] = i;

    while(!pq.empty()){
        pii cur = pq.top();
        pq.pop();

        int u = cur.second;
        int w = cur.first;

        if(w > dis[u]) continue;

        for(pii x : a[u]){
            int v = x.second;
            int w1 = x.first;

            if(dis[u] + w1 < dis[v] || (dis[u] + w1 == dis[v] && des[u] < des[v])){
                dis[v] = dis[u] + w1;
                des[v] = des[u];
                pq.push({dis[v], v});
            }
        }
    }
    for(int i = 1; i<=k;i++){
        for(int j = 0; j<cnt[pos[i]];j++){
            cout<<des[pos[i]]<<" ";
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m>>k;
    memset(cnt, 0, sizeof(cnt));
    for(int i = 1; i<=k;i++){
        cin>>pos[i];
        cnt[pos[i]]++;
    }
    for(int i = 0; i<m;i++){
        int u, v, w;
        cin>>u>>v>>w;
        a[u].push_back({w, v});
        a[v].push_back({w, u});
    }
    dijkstra();

    return 0;
}

// 6 6 3
// 1 3 6
// 1 2 1
// 2 3 1
// 3 4 1
// 4 5 1
// 5 6 1
// 2 6 1