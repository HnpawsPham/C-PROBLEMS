#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define pii pair<int, int>

int n;

int main(){
    freopen(".\\txt\\EXLIST.INP","r", stdin);
    freopen(".\\txt\\EXLIST.OUT", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    int a[n + 1], p[n + 1];
    queue<pii> pos;
    unordered_map<int, int> left;
    p[0] = 0;

    for(int i = 1;i<=n;i++){
        cin>>a[i];
        p[i] = a[i] + p[i - 1];

        if(left.count(a[i])){
            pos.push({left[a[i]], i});
            continue;
        }
        left[a[i]] = i;
    }

    int sum = 0, len = 0;
    while(!pos.empty()){
        pii curr = pos.front();
        pos.pop();

        int l = curr.first;
        int r = curr.second;

        if(r - l + 1 > len){
            len = r - l + 1;
            sum = p[r] - p[l - 1];
        }
        else if(r - l + 1 == len){
            sum = max(sum, p[r] - p[l - 1]);
        }
    }
    cout<<len<<" "<<sum<<el;

    return 0;
}