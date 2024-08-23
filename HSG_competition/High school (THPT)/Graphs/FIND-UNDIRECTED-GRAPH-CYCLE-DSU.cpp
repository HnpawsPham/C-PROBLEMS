#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<pair<int, int>> a;
vector<int> parent(10001), psize(10001, 0);

void makeSet(){
    for(int i = 1;i<=n;i++){
        parent[i] = i;
        psize[i]++;
    }
}

int find(int x){
    if(parent[x] == x){
        return x;
    }

    return parent[x] = find(parent[x]);
}

void unionSet(int a, int b){
    a = find(a);
    b = find(b);

    if(a != b){
        if(psize[a] < psize[b]){
            swap(a, b);
        }

        parent[b] = a;
        psize[b] += psize[a];
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i = 1;i<=m;i++){
        int u,v;
        cin>>u>>v;

        a.push_back({u, v});
    }

    makeSet();

    for(auto cur : a){
        int u = cur.first;
        int v = cur.second;
        
        if(find(u) == find(v)){
            cout<<"YES";
            return 0;
        }

        unionSet(u, v);
    }

    cout<<"NO"<<endl;
    return 0;
}