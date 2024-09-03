#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define pli pair<ll, int>

int n, m;
const int maxn = 100001;
vector<vector<pli>> a(maxn);

void dijkstra(int x){
    vector<ll> dis(n + 1, LLONG_MAX);
    priority_queue<pli, vector<pli>, greater<pli>> pq;
    dis[x] = 0;
    pq.push({0, x});

    while(!pq.empty()){
        pli curr = pq.top();
        pq.pop();

        int u = curr.second;
        ll w = curr.first;

        if(w > dis[u]) continue;

        for(pli x : a[u]){
            int v = x.second;
            ll w1 = x.first;

            if(dis[v] > dis[u] + w1){
                dis[v] = dis[u] + w1;
                pq.push({dis[v], v});
            }
        }
    }

    for(int i =1 ;i<=n;i++){
        cout<<dis[i]<<" ";
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i =0; i<m;i++){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        a[u].push_back({w, v});
    }

    dijkstra(1);

    return 0;
}