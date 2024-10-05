#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define pii pair<int, int>

int n, m;
const int maxn = (int)1e5 + 5;
vector<vector<pii>> a(maxn);
vector<pii> p;
bool check[maxn] = {false};

int dfs(int u, int minw){
    check[u] = true;
    
    for(pii x : a[u]){
        int v = x.second;
        int w = x.first;
        
        pii cur = {u, v};
        if(find(p.begin(), p.end(), cur) != p.end()) 
            minw = min(minw, w);
            
        p.push_back(cur);

        if(!check[v]) {
            dfs(v, minw);
        }
    }
    return minw;
}

int main(){
    freopen(".\\txt\\COMNET.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    while(m--){
        int u, v, w;
        cin>>u>>v>>w;
        a[u].push_back({w, v});
        a[v].push_back({w, u});
    }

    int cnt = 0, cost = 0;
    for(int i = 1; i<=n;i++){
        if(!check[i]){
            int res = dfs(i, INT_MAX);
            if(res == INT_MAX) res = 0;

            cost += dfs(i, res);
            cnt++;
        }
    }
    cout<<(cnt == 1 ? 0 : cost)<<el;

    return 0;
}