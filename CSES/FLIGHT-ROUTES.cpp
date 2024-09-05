#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define pli pair<ll, int>

int n,m,k;
const int maxn = 100001;
vector<vector<pli>> a(maxn);
vector<ll> res;

void dijkstra(int x){
    int cnt[n + 1];
    for(int i = 1;i<=n;i++){
        cnt[i] = 0;
    }
    priority_queue<pli, vector<pli>, greater<pli>> pq;
    pq.push({0, x});

    while(!pq.empty()){
        pli curr = pq.top();
        pq.pop();

        int u = curr.second;
        ll w = curr.first;

        if(u == n) res.push_back(w);
        if(res.size() == k) return;

        if(cnt[u] > k) continue;
        cnt[u]++;

        for(pli x : a[u]){
            int v = x.second;
            ll w1 = x.first;

            pq.push({w + w1, v});
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m>>k;
    for(int i = 0;i<m;i++){
        int u, v;
        ll w;
        cin>>u>>v>>w;
        a[u].push_back({w, v});
    }
    dijkstra(1);
    
    for(ll x : res){
        cout<<x<<" ";
    }

    return 0;
}