#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define pii pair<int, int>

int n, m, d;
const int maxn = 2001;
int parent[maxn], sz[maxn];

void makeSet(){
    for(int i = 1;i<=n;i++){
        parent[i] = i;
        sz[i] = 1;
    }
    return;
}

int find(int x){
    if(x == parent[x]){
        return x;
    }
    return parent[x] = find(parent[x]);
}

void unionSet(int a, int b){
    a = find(a);
    b = find(b);

    if(a == b){
        return;
    }
    if(sz[a] < sz[b]){
        swap(a, b);
    }
    parent[b] = a;
    sz[a] += sz[b];
    sz[b] = 0;
    return;
}

void disunionSet(int a, int b){
    a = find(a);
    b = find(b);

    if(a != b) return;
    sz[a] = 0;
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    makeSet();
    
    for(int i = 0; i<m;i++){
        int u, v;
        cin>>u>>v;
        unionSet(u, v);
    }

    cin>>d;
    for(int i = 0;i<d;i++){
        int u,v ;
        cin>>u>>v;
        disunionSet(u ,v);
    }

    int res = 0;
    for(int i = 1;i<=n;i++){
        res = max(res, sz[i]);
    }
    cout<<res<<el;

    return 0;
}