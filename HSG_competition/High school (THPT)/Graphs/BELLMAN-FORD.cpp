#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct line
{
    int u, v;
    ll w;

    line(int u1, int v1, ll w1) : u(u1), v(v1), w(w1) {};
};

int n, m, st = -1, en;
int parent[100001];
ll dis[100001] = {LLONG_MAX};
vector<line> a;

void bellmanFord()
{
    for (int i = 0; i < n && st; i++)
    {
        st = 0;
        for (auto l : a)
        {
            if (dis[l.v] > dis[l.u] + l.w)
            {
                dis[l.v] = dis[l.u] + l.w;
                parent[l.v] = l.u;
                st = l.v;
            }
        }
    }

    if(!st){
        cout<<"NO"<<endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        st = parent[st];
    }

    deque<int> cycle;
    en = st;
    do
    {
        cycle.push_front(en);
        en = parent[en];
    }
    while(en != st);

    cycle.push_front(en);

    cout<<"YES"<<endl;
    for(auto x : cycle){
        cout<<x<<" ";
    }

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        ll w;
        cin >> u >> v >> w;

        line l(u, v, w);
        a.push_back(l);
    }

    bellmanFord();

    return 0;
}