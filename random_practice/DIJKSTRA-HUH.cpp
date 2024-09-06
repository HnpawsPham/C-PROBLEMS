#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define pii pair<int, int>

int n, m;
const int maxn = 100001;
const ll maxint = 1e18;

void dijkstra(vector<vector<pii>> &a){
    int parent[n + 1];
    ll dis[n + 1];
    
    for(int i = 1; i <= n; i++){
        dis[i] = maxint;
    }
    
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dis[1] = 0;
    pq.push({0, 1});

    while(!pq.empty()){
        pii curr = pq.top();
        pq.pop();

        int u = curr.second;
        int w = curr.first;

        if(w > dis[u]) continue;

        for(pii x : a[u]){
            int v = x.second;
            int w1 = x.first;

            if(dis[v] > dis[u] + w1){
                dis[v] = dis[u] + w1;
                pq.push({dis[v], v});
                parent[v] = u;
            }
        }
    }

    if(dis[n] >= maxint){
        cout << -1 << el;
        return;
    }

    int en = n;
    deque<int> path;

    while(en != 1){
        path.push_front(en);
        en = parent[en];
    }
    path.push_front(1);

    for(int t : path){
        cout << t << " ";
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m; 
    vector<vector<pii>> a(n + 1);
    
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        a[u].push_back({w, v});
        a[v].push_back({w, u});
    }
    
    dijkstra(a);

    return 0;
}
