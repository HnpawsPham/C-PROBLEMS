#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pii pair<int, int>

int n;

bool compare(pii a, pii b)
{
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    vector<pii> a;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x>>y;

        a.push_back({x, 1});
        a.push_back({y, -1});
    }

    sort(a.begin(), a.end());

    ll current = 0, maxx = 0;

    for(auto x : a){
        current += x.second;
        maxx = max(maxx, current);
    }

    cout<<maxx<<endl;

    return 0;
}