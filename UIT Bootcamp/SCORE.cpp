#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int s, m, n;
bool ok = false;
const int maxn = 23;
int a[maxn][maxn];

void solve(int i, int j1, int sum, int last){
    if(i == n){
        if(sum == s) ok = true;
        return;
    }

    for(int j = j1; j<m;j++){
        if(a[i][j] >= last){
            cout<<a[i][j]<<" ";
            solve(i + 1, j, sum + a[i][j], a[i][j]);
            if (j < m - 1) solve(i, j + 1, sum + a[i][j], a[i][j]);
            cout<<el;
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>s>>m>>n;
    for(int i = 0; i < n ;i++){
        for(int j = 0; j<m;j++){
            cin>>a[i][j];
        }
    }
    int sum = 0;
    solve(0, 0, sum, 0);

    if(ok) cout<<"YES"<<el;
    else cout<<"NO"<<el;

    return 0;
}