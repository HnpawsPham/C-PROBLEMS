#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define pli pair<ll, int>

int n, m;
const int maxn = 100001;
vector<vector<pli>> a(maxn), ra(maxn);

void dijkstra(int x, vector<ll>& dis, vector<vector<pli>>& a){
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
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i = 0;i<m;i++){
        int u, v;
        ll w;
        cin>>u>>v>>w;
        a[u].push_back({w, v});
        ra[v].push_back({w, u});
    }
    vector<ll> dis1(n + 1, LLONG_MAX);
    dijkstra(1, dis1, a);
    vector<ll> disn(n + 1, LLONG_MAX);
    dijkstra(n, disn, ra);

    ll res = LLONG_MAX;
    for(int u = 1;u<=n;u++){
        for(pli x : a[u]){
            int v = x.second;
            ll w = x.first;

            if(dis1[u] == LLONG_MAX || disn[v] == LLONG_MAX) continue;
            res = min(res, dis1[u] + (w / 2) + disn[v]);
        }
    }

    cout<<res<<el;

    return 0;
}