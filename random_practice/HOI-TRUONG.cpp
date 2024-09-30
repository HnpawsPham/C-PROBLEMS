#include <bits/stdc++.h>
using namespace std;
#define el "\n"

struct quest{
    int l, r, val;
    quest(int l1, int r1, int t1) : l(l1), r(r1), val(t1) {};
};

int n;
const int maxn = 30005;
vector<quest> a;
vector<int> t(4 * maxn, 0);

bool compare(quest a, quest b){
    return a.l < b.l;
}

void update(int pos, int val)
{
    int i = pos + n;
    t[i] = val;

    while(i > 0){
        i/=2;
        t[i] = max(t[2 * i], t[2 * i + 1]);
    }
    return;
}

int query(int l, int r){
    int res = 0;

    l += n;
    r += n;

    while(l <= r){
        if(l % 2 == 1){
            res = max(res, t[l]);
            l++;
        }
        if(r % 2 == 0){
            res = max(res, t[r]);
            r--;
        }
        l/=2; r/=2;
    }

    return res;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;

    for(int i = 0; i<n;i++){
        int l, r;
        cin>>l>>r;
        a.push_back({l, r, r - l});
    }

    sort(a.begin(), a.end(), compare);
    vector<int> dp(30005, 0);
    int res = 0;

    for(int i = 0; i<n;i++){
        int x = query(1, a[i].l - 1);

        dp[a[i].r] = max(dp[a[i].r], x + a[i].val);
        update(a[i].r, dp[a[i].r]);
        res = max(res, dp[a[i].r]);
    }
    cout<<res<<el;

    return 0;
}