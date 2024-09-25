#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n;
const int maxn = 6;
int a[maxn][maxn];
vector<int> path(maxn);

int calCost(vector<int> path){
    int sum = 0;

    for(int i = 1; i<n;i++){
        sum += a[path[i]][path[i + 1]];
    }
    sum += a[path[n]][path[1]];

    return sum;
}

void solve(){
    bool ok = true;

    while(ok){
        ok = false;
        for(int i = 2; i<n;i++){
            for(int j = i + 1;j <=n;j++){
                vector<int> t = path;
                reverse(t.begin() + i, t.begin() + j + 1);

                int curr = calCost(path);
                int newCost = calCost(t);

                if(newCost < curr){
                    path = t;
                    ok = true;
                }
            }
        }
    }
    return;
}

int main(){
    freopen(".\\txt\\TSP.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    for(int i = 1; i<=n;i++){
        for(int j=1; j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i = 1;i<=n;i++){
        path[i] = i;
    }
    solve();
    int res = calCost(path);
    cout<<res<<el;

    return 0;
}