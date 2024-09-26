#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n;
const int maxn = 105;
int a[maxn][maxn];

int calCost(vector<int> path){
    int sum = 0;
    for(int i = 1; i<n;i++){
        sum += a[path[i]][path[i + 1]];
    }
    sum += a[path[n]][path[1]];
    return sum;
}

struct Elm{
    int cost;
    vector<int> path;

    Elm(vector<int> p) : path(p){
        cost = calCost(p);
    }
};

void print(Elm curr){
    cout<<curr.cost<<el;
    for(int i = 1; i<curr.path.size();i++){  
        cout<<curr.path[i]<<" ";
    }
    cout<<curr.path[1]<<el;
    return;
}

void solve(Elm curr){
    bool ok = true;

    while(ok){
        ok = false;
        for(int i = 2; i<n;i++){
            for(int j = i + 1; j<=n;j++){
                vector<int> t = curr.path;
                reverse(t.begin() + i, t.begin() + j + 1);

                Elm newElm(t);
                if(newElm.cost < curr.cost){
                    curr = newElm;
                    ok = true;
                }
            }
        }
    }
    print(curr);
    return;
}

Elm build(){
    vector<int> path(n + 1);
    for(int i = 1; i<=n;i++){
        path[i] = i;
    }
    return Elm(path);
}

int main(){
    freopen(".\\txt\\DU-LICH.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    for(int i = 1;i<=n;i++)
        for(int j = 1;j<=n;j++)
            cin>>a[i][j];
  
    Elm curr = build();
    solve(curr);

    return 0;
}