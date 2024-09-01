#include <bits/stdc++.h>
using namespace std;

int n, m;
const int maxn = 10001;
vector<vector<int>> a(maxn);

// BRUTE FORCE-------------------------------
bool check[maxn] = {false};

int dfs(int u){
    check[u] = true;
    
    for(auto v : a[u]){
        if(!check[v]){
            dfs(v);
        }
    }

    return 0;
}

void dem(){
    int res = 0,cnt = 0;
    vector<int> ans;

    for(int i =1;i<=n;i++){
        if(!check[i]){
            dfs(i);
            cnt++;
        }
    }

    for(int i =1;i<=n;i++){
        memset(check, false, sizeof(check));
        check[i] = true;
        int cnt2 = 0;

        for(int j = 1; j<=n;j++){
            if(!check[j]){
                dfs(j);
                cnt2 ++;
            }
        }

        if(cnt2 > cnt){
            res++;
            ans.push_back(i);
        }
    }

    cout<<res<<endl;
    for(int x : ans){
        cout<<x<<" ";  
    }
}

// TARJAN ---------------------------------
int id = 0;
int index[maxn];
int low[maxn];
vector<int> ans;

void tarjan(int u, int parent){
    index[u] = low[u] = id++;

    for(int v : a[u]){
        if(index[v] == -1){
            tarjan(v, u);
            low[u] = min(low[u], low[v]);

            if(parent != 0 && low[v] >= index[u]){ // v la con cua u hoac la con cua mot dinh con cua u
                ans.push_back(u);
                return;
            }
        }
        else if(v != parent){ // canh nguoc
            low[u] = min(low[u], index[v]);
        }
    }

    if(parent == 0 && ans.size() > 1){ // dinh goc cua 1 thanh phan lien thong
        ans.push_back(u);
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i =0;i<m;i++){
        int u, v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    // dem();
    memset(index, -1, sizeof(index));

    for(int i = 1;i<=n;i++){
        if(index[i] == -1){
            tarjan(i, 0);
        }
    }

    cout<<ans.size()<<endl;
    for(auto x : ans){
        cout<<x<<" ";
    }

    return 0;
}

// 10 6
// 5 4
// 5 2
// 10 2
// 10 7
// 5 3
// 10 1