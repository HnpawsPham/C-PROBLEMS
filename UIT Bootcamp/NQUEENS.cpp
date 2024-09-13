#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n, cnt = 0;
bool ok = false;
const int maxn = 20;
bool a[maxn][maxn];

void print(){
    ok = true;

    cout<<"[";
    for(int i = 1; i<n;i++)
        for(int j = 1; j<=n;j ++)
            if(a[i][j]) cout<<'('<<i<<", "<<j<<") ";
    for(int j = 1; j<=n; j++){
        if(a[n][j]) cout<<'('<<n<<", "<<j<<')';
    }
    cout<<"]"<<el;
    return;
}

bool check(int row, int col){
    for(int i = 1; i < row;i++)
        if(a[i][col]) return false;

    for(int i = row - 1, j = col - 1; i > 0 && j > 0; i--, j--)
        if(a[i][j]) return false;

    for(int i = row - 1, j = col + 1; i>0 && j <= n; i--, j++)
        if(a[i][j]) return false;

    return true;
}

void solve(int i){
    if(i == n + 1) {
        print();
        return;
    }

    for(int j = 1;j<=n;j++){
        if(check(i, j)){
            a[i][j] = 1;
            solve(i + 1);
            a[i][j] = 0;
        } 
    }    
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    memset(a, 0, sizeof(a));
    solve(1);

    if(!ok) cout<<"No solution found."<<el;

    return 0;
}