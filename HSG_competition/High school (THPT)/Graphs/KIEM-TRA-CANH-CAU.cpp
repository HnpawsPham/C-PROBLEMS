#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

int n, m, s = 0, t = 0;
const int maxn = 10001;
vector<vector<int>> a(maxn);

// BRUTE FORCE ------------------------------------------------------
vector<pii> b;
bool check[maxn] = {false};
void dfs(int u)
{
    check[u] = true;

    for (int v : a[u])
    {   
        if((u == s && v == t) || (u == t && v == s)) continue;

        if (!check[v])
        {
            dfs(v);
        }
    }
    return;
}

void solve()
{
    int cnt = 0, res = 0;
    vector<pii> ans;
    
    for(int i =1;i<=n;i++){
        if(!check[i]){
            dfs(i);
            cnt++;
        }
    }

    for(pii curr : b){
        int u = curr.first;
        int v = curr.second;
        int cnt2 = 0;

        memset(check, false, sizeof(check));
        s = u; t = v;

        for(int j = 1; j<=n;j++){
            if(!check[j]){
                dfs(j);
                cnt2++;
            }
        }

        if(cnt2 > cnt){
            res++;
            ans.push_back({u, v});
        }
    }

    cout<<res<<"\n";
    for(pii x : ans){
        cout<<x.first<<" "<<x.second<<"\n";
    }
    return;
}

// TARJAN ------------------------------------------------------------
int index[maxn] = {0}, low[maxn];
int id = 0;
vector<pii> ans;

void tarjan(int u, int parent){
    index[u] = low[u] = id++;

    for(int v : a[u]){
        if(!index[v]){
            tarjan(v, u);
            low[u] = min(low[u], low[v]);

            if(low[v] > index[u]){ // tu v k the quay ve dinh nao la to tien cua u 
                ans.push_back({u, v});
            }
        }
        else if(v != parent){
            low[u] = min(low[u], index[v]);
        }
    }   
    return;
}   

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for(int i =0;i<m;i++){
        int u, v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
        // b.push_back({u, v}); brute force only
    }
    
    // solve();
    for(int i = 1;i<=n;i++){
        if(!index[i]){
            tarjan(i, 0);
        }
    }
    
    cout<<ans.size()<<"\n";
    for(pii x : ans){
        cout<<x.first<<" "<<x.second<<"\n";
    }

    return 0;
}

// 10 8
// 10 9
// 10 8
// 10 3
// 5 3
// 10 1
// 5 1
// 5 4
// 10 4