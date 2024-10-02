#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n, m, k;
const int maxa = (int)1e5 + 5;

int main(){
    freopen(".\\txt\\LINE.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int cnt[maxa];
    memset(cnt, 0, sizeof(cnt));

    cin>>n>>m>>k;
    int a[n][m];
    int res = 0;

    for(int i = 0; i<n;i++){
        for(int j = 0; j<m;j++){
            cin>>a[i][j];
            cnt[a[i][j]]++;
        }
    }
    sort(cnt, cnt + maxa, greater<int>());
    for(int i = 0; i<maxa, k > 0;i++, k--){
        if(cnt[i] == 0) break;
        res += cnt[i];
    }
    cout<<res<<el;
    return 0;
}