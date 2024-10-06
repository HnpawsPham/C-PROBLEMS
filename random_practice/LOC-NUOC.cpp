#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n;
ll t;
const int maxm = (int)1e5 + 5;

int main(){
    freopen(".\\txt\\LOC-NUOC.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>t;
    int m = 0;

    int a[n], p[maxm], r[maxm];
    int maxa = -1;    
    for(int i = 0; i<n;i++){
        cin>>a[i];
        maxa = max(maxa, a[i]);
    }

    for(int i = 0; i<t;i++){
        cin>>r[i];
        
        if(i > 0) p[i] = p[i - 1] + r[i];
        else p[i] = r[i];
        m++;

        if(p[i] > maxa) break;
    }

    int res[m] = {0};
    int cnt[m] = {0};

    for(int i = 0; i<n;i++){
        int pos = lower_bound(p, p + m, a[i]) - p;

        if(pos != m){
            res[pos] += a[i] - p[pos - 1];
            cnt[pos - 1]++;
        }
        // for(int j = 0; j < pos; j++) res[j] += r[j];
    }

    for(int i = m - 2; i >= 0; i--) cnt[i] += cnt[i + 1];
    
    for(int i = 0; i < m;i++) {
        cout<<res[i] + r[i] * cnt[i]<<" ";
    }
    return 0;
}