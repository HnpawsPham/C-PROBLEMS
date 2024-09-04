#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define pii pair<int, int>

int n;
const int maxn = 1001;

int main(){
    freopen(".\\txt\\EXLIST.INP","r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    int a[n], p[n];
    queue<pii> pos;
    unordered_map<int, int> cnt;

    for(int i = 0;i<n;i++){
        cin>>a[i];
        p[i] = a[i];

        if(cnt.count(a[i])){
            pos.push({cnt[a[i]], i});
        }
        else{
            cnt[a[i]] = i;
        }
        
        if(i > 0){
            p[i] += p[i - 1];
        }
    }

    int sum = 0, len = 0;
    while(!pos.empty()){
        pii curr = pos.front();
        pos.pop();

        int i = curr.first;
        int j = curr.second;

        if(j - i + 1 < len) continue;
        len = j - i + 1;
        sum = max(sum, p[j] - (i > 0 ? p[i - 1] : 0));
    }
    cout<<len<<el;
    cout<<sum<<el;

    return 0;
}