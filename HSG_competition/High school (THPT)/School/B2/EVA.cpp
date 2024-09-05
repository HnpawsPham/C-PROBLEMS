#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define pii pair<int, int>

int n, k, m;
const int maxn = 100001;
vector<vector<pii>> a(maxn);
vector<int> is_exit;
int res[maxn], dis[maxn];

void dijkstra(int x){
    for(int i = 1;i<=n;i++){
        dis[i] = INT_MAX;
    }

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dis[x] = 0;
    pq.push({0, x});

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
            }
        }
    }
}

int main()
{
    freopen(".\\txt\\EVA.INP", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin>>n>>k;
    for(int i = 0;i<k;i++){
        int x;
        cin>>x;
        is_exit.push_back(x);
    }
    cin>>m;
    for(int i = 0;i<m;i++){
        int u, v,w;
        cin>>u>>v>>w;
        a[u].push_back({w, v});
        a[v].push_back({w, u});
    }

    for(int i = 1; i<=n;i++){
        res[i] = INT_MAX;
    }

    for(int x : is_exit){
        dijkstra(x);

        for(int i =1;i<=n;i++){
            res[i] = min(res[i], dis[i]);
        }
    }

    for(int i = 1;i<=n;i++){
        cout<<res[i]<<" ";
    }

    return 0;
}