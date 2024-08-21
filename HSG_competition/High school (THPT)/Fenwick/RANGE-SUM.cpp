#include <bits/stdc++.h>
using namespace std;

int n, t;
vector<int> bit(10001, 0);

void update(int i, int del){
    while(i <= n){
        bit[i] += del;
        i += (i  & -i);
    }
}

int sum(int i){
    int res = 0;

    while(i > 0){
        res += bit[i];
        i -= (i & -i);
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        update(i, x);
    }

    cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;

        cout<<sum(r) - sum(l - 1)<<endl;
    }

    return 0;
}