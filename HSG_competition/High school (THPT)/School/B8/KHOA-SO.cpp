#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define pli pair<ll, int>

int n, m;
ll s;

int main(){
    freopen(".\\txt\\KHOA-SO.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>m>>n>>s;
    vector<map<ll, int>> a(m);

    for(int i = 0; i<m;i++){
        while(n--){
            ll x;
            cin>>x;
            a[i][x]++;
        }
    }

    for(pli cur : a[0]){
        ll x = cur.first;
        int cnt = cur.second;
        for(int i = 0; i<m; i++){
            if(a[i][s - x]){

            }
        }
    }


    return 0;
}