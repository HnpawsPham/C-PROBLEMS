#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n;
const int maxn = 16;
int a[maxn][maxn];
vector<vector<int>> best(maxn, vector<int>(maxn, INT_MAX));
int mincost = INT_MAX;
bool check[maxn] = {false};

void solve(int i, int sum, int cnt){
    if(cnt == n && a[i][0]){
        mincost = min(mincost, sum + a[i][0]);
        return;
    }
    for(int j = 0;j<n;j++){
        if(check[j] || !a[i][j]) continue;
        
        if(sum + a[i][j] < best[i][j]){
            check[j] = true;
            best[i][j] = min(best[i][j], a[i][j] + sum);
            solve(j, sum + a[i][j], cnt + 1);
        }
        
        check[j] = false;
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    for(int i = 0; i<n;i++){
        for(int j=0;j<n;j++) cin>>a[i][j];
    }

    check[0] = true;
    solve(0, 0, 1);
    cout<<mincost<<el;

    return 0;
}