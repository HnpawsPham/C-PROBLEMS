#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
vector<vector<int>> a(10001);
map<int,int> parent;
vector<bool> check(10001);

void dfs(int u)
{
    check[u] = true;

    for (auto v : a[u])
    {
        if (!check[v])
        {
            parent.insert({v, u});
            dfs(v);
        }
    }
}

void findPath(){
    dfs(s);

    if(!check[t]){
        cout<<"NO"<<endl;
        return;
    }

    vector<int> path;

    while(t != s){
        path.push_back(t);
        t = parent[t];
    }

    path.push_back(s);
    reverse(path.begin(), path.end());

    for(auto x : path){
        cout<<x<<" ";
    }
    cout<<endl;
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
        a[v].push_back(u);
    }

    findPath();

    return 0;
}