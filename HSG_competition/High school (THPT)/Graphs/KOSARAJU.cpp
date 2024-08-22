#include <bits/stdc++.h>
using namespace std;

int n,m, cnt = 0; // so luong thanh phan lien thong manh
vector<vector<int>> a(10001), ra(10001);
vector<int> check(10001, 0);
stack<int> topo;

void dfs(int u, vector<vector<int>>& a, bool print){
    check[u]++;

    if(print){
        cout<<u<<" ";
    }

    for(auto v : a[u]){
        if(check[v] < check[u]){
            dfs(v, a, print);
        }
    }

    topo.push(u);
}

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    cin>>n>>m;

    for(int i = 1; i<=m;i++){
        int u,v;
        cin>>u>>v;

        a[u].push_back(v);
        ra[v].push_back(u);
    }

    for(int i = 1;i<=n;i++){
        if(check[i] < 1){
            dfs(i, a, false);
        }
    }
    cout<<endl;

    while(!topo.empty()){
        int current = topo.top();
        topo.pop();

        if(check[current] < 2){
            dfs(current, ra, true);
            cout<<endl;

            cnt++;
        }
    }

    cout<<(cnt == 1 ? "STRONG" : "WEAK\n" + to_string(cnt))<<endl;

    return 0;
}