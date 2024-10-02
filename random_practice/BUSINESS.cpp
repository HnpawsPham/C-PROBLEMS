#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n, m;
const int maxn = 10005;
int parent[maxn];
int sz[maxn];

void makeSet(){
    for(int i = 1; i<=n;i++){
        parent[i] = i;
        sz[i] = 1;
    }
    return;
}

int find(int x){
    if(x == parent[x]) return x;
    return parent[x] = find(parent[x]);
}

void unionSet(int a, int b){
    a = find(a);
    b = find(b);

    if(a == b) return;
    if(a < b) swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
    sz[b] = 0;

    return;
}

int main(){
    freopen(".\\txt\\BUSINESS.INP", "r", stdin);
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
    sort(sz, sz + n, greater<int>());
    cout<<sz[0] + sz[1]<<el;

    return 0;
}