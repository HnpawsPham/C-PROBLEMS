#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define pii pair<int, int>
#define MOD 1000000007

int n;

int getdis(int x, int y){
    return (abs(x) + abs(y));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    pii a[n];
    bool notok = false;
    unordered_map<int, int> cnt;

    for(int i = 0;i<n;i++){
        int x, y;
        cin>>x>>y;

        a[i].first = getdis(x, y);
        a[i].second = i + 1;

        cnt[a[i].first]++;
        if(cnt[a[i].first] > 1 || (a[i].first == 0)) notok = true;
    }

    if(notok){
        cout<<-1<<el;
        return 0;
    }

    sort(a, a + n);

    for(pii x : a){
        cout<<x.second<<" ";
    }

    return 0;
}