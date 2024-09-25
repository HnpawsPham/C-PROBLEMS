#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define pii pair<int, int>

int n;
const int maxn = 105;
const int maxw = (int)1e6;
vector<vector<pii>> a(maxn);

void dijkstra(int x){
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<int> dis(n + 1, maxw);
    deque<int> path;

    dis[x] = 0;
    pq.push({0, x});

    while(!pq.empty()){
        pii cur = pq.top();
        pq.pop();

        int u = cur.second;
        int w = cur.first;

        if(w > dis[u]) continue;
    

        for(pii x : a[u]){
            int v = x.second;
            int w1 = x.first;

            if(dis[u] != maxw && dis[u] + w1 < dis[v]){
                dis[v] = dis[u] + w1;
                path.push_front(v);
                pq.push({dis[v], v});
            }
        }
    }

    int sum = 0;
    for(int i = 1; i<=n;i++){
        sum += dis[i];
    }
    cout<<sum<<el;
    cout<<x<<" ";
    for(int c : path){
        cout<<c<<" ";
    }
    cout<<x<<el;
    return;
}

int main(){
    freopen(".\\txt\\DU-LICH.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    for(int i = 1; i<=n;i++)
        for(int j = 1; j<=n;j++){
            int w;
            cin>>w;
            a[i].push_back({w, j});
        }
    
    dijkstra(1);

    return 0;
}