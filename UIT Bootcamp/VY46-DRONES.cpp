#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define pii pair<int, int>

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    vector<pii> a;
    for(int i = 0; i<n;i++){
        int x, y;
        cin>>x>>y;
        a.push_back({max(abs(x), abs(y)), i + 1});
    }
    sort(a.begin(), a.end());
    for(int i = 0; i < n;i++){
        if(a[i].first < i + 1){
            cout<<-1<<el;
            return 0;
        }
    }
    for(pii x : a){
        cout<<x.second<<" ";
    }cout<<el;
    return 0;
}