#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define u first
#define v second

int n, cnt = 0;
const int maxn = 2000001;
bool check[maxn] = {false};
int res[maxn] = {0};
int des[maxn];
queue<int> q;

int dfs(int u){
    q.push(u);

    if(check[u]){
        cnt += res[u];
        return 0;
    }

    check[u] = true;
    cnt++;
    dfs(des[u]);

    return 0;
}

void solve(){
    int dec = 1;

    while(!q.empty()){
        if(q.front() == q.back()){
            dec = 0;
        }
        res[q.front()] = cnt;
        cnt -= dec;
        q.pop();
    }
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> des[i];
    }

    for(int i = 1;i<=n;i++){
        if(!check[i]){
            cnt = 0;
            dfs(i);
            
            solve();
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}