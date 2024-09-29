#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define pii pair<int, int>
#define MOD 1000000007

int n, m, s, t;
const int maxn = 3 * (int)1e5 + 5;
const int minw = -1005;
int cntpath[maxn];
int in[maxn];
vector<vector<pii>> a(maxn);

void count(){
    queue<int> q;
    bool check[n + 1];
    q.push(s);
    check[s] = true;
    cntpath[s] = 1;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(pii cur : a[u]){
            int v = cur.second;

            if(!check[v]){
                q.push(v);
                check[v] = true;
            }

            cntpath[v] = (cntpath[v] + cntpath[u]) % MOD;
        }
    }
    return;
}

void dijkstra(){
    priority_queue<pii> pq;
    vector<int> dis(n + 1, minw);
    
    dis[s] = 0;
    pq.push({0, s});

    while(!pq.empty()){
        pii cur = pq.top();
        pq.pop();

        int u = cur.second;
        int w = cur.first;

        if(w < dis[u]) continue;

        for(pii x : a[u]){
            int v = x.second;
            int w1 = x.first;

            if(dis[u] + w1 > dis[v]){
                dis[v] = dis[u] + w1;
                pq.push({dis[v], v});
            }
        }
    }
    
    cout<<(dis[t] == minw ? "NO PATH" : to_string(dis[t]))<<el;
    return;
}

int main(){
    freopen(".\\txt\\DAG.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m>>s>>t;
    for(int i = 0; i<m;i++){
        int u, v, w;
        cin>>u>>v>>w;
        a[u].push_back({w, v});
    }    
    count();
    dijkstra();
    cout<<cntpath[t]<<el;
    return 0;
}