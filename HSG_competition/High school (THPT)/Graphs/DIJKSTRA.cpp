#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pli pair<ll, int>
#define el '\n'

int n, m, st, en;
const int maxn = 100001;
vector<vector<pli>> a(maxn);

void dijkstra(int st, int en){
    vector<ll> dis(n + 1, LLONG_MAX);
    priority_queue<pli, vector<pli>, greater<pli>> pq;
    int parent[n + 1];

    dis[st] = 0;
    pq.push({0, st});

    while(!pq.empty()){
        pli curr = pq.top();
        pq.pop();

        int u = curr.second;
        ll w = curr.first;

        if(w > dis[u]) continue;

        for(pli st : a[u]){
            ll w1 = st.first;
            int v = st.second;

            if(dis[v] > dis[u] + w1){
                dis[v] = dis[u] + w1;
                pq.push({dis[v], v});
                parent[v] = u;
            }
        }
    }

    deque<int> path;

    cout<<dis[en]<<el;
    while(en != st){
        path.push_front(en);
        en = parent[en];
    }
    path.push_front(st);

    for(int x : path){
        cout<<x<<" ";
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin>>n>>m>>st>>en;
    for(int i = 0;i<m;i++){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        a[u].push_back({w, v});
        a[v].push_back({w, u});
    }
    
    dijkstra(st, en);

    return 0;
}

// 6 8 1 5
// 1 2 7
// 2 3 2
// 2 4 9
// 3 5 10
// 4 6 1
// 5 4 4
// 5 6 5
// 1 3 12