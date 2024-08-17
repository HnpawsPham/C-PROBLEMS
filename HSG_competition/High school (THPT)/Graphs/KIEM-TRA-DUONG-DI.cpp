#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<bool> check(10001,false);
vector<vector<int>> a(10001);

bool hasPath = false;

bool bfs(){
    queue<int> q;
    q.push(s);

    check[s] = true;

    while(!q.empty()){

        int v = q.front();
        q.pop();
        cout<<v<<" ";

        if(v == t){
            cout<<endl;

            return true;
        }

        for(auto x : a[v]){
            if(!check[x]){
                q.push(x);
                check[x] = true;
            }
        }
    }

    return false;
}

void dfs(int u){
    cout<<u<<" ";
    check[u] = true;

    for(auto x : a[u]){
        if(x == t){
            cout<<x<<endl;

            hasPath = true;
            return;
        }

        if(!check[x]){
            dfs(x);
        }
        
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> s >> t;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        a[u].push_back(v);
        // a[v].push_back(u);
    }

    cout<<(bfs() ? "true" : "false");

    // dfs(s);
    // cout<<(hasPath ?  "true" : "false");

    return 0;
}