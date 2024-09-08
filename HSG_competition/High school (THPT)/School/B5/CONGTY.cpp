#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n, q, res;
const int maxn = 2 * 1e5 + 1;
ll p[maxn];
vector<vector<int>> a(maxn);
bool check[maxn] = {false};

void dfs(int u){
    check[u] = true;
    bool first = true;

    for(int v : a[u]){
        if(!check[v]){
            res++;
            if(p[v] > p[u] && first){
                res --;
                first = false;
            }
            dfs(v);
        }
    }
    return;
}

int main(){
    freopen(".\\txt\\CONGTY.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>q;
    for(int i =1 ;i<=n;i++){
        cin>>p[i];
    }
    for(int i = 1; i<n;i++){
        int x;
        cin>>x;
        a[x].push_back(i + 1);
    }

    while(q--){
        int x;
        cin>>x; 
        res = 1;
        memset(check, false, sizeof(check));
        dfs(x);
        cout<<res<<el;
    }

    return 0;
}