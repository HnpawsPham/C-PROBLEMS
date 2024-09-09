#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n, m, q;
const int maxn = 5001;
vector<vector<int>> a(maxn);

bool bfs(int x, int y, int d){
    int pathlen[n + 1];
    for(int i = 1;i<=n;i++){
        pathlen[i] = 0;
    }
    queue<int> q;
    bool check[n + 1];
    check[x] = true;
    q.push(x);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v : a[u]){
            if(!check[v]){
                check[v] = true;
                q.push(v);
                pathlen[v] = pathlen[u] + 1;

                if(v == y) break;
            }
        }
    }
    
    if(d % pathlen[y] == 0){
        return 1;
    }
    return 0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m>>q;
    for(int i = 0;i<m;i++){
        int u, v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    while(q--){
        int a, b;
        ll d;
        cin>>a>>b>>d;
        cout<<bfs(a, b, d)<<el;
    }

    return 0;
}