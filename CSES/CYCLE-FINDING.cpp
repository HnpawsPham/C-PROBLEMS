#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct line
{
    int u, v;
    ll w;

    line(int u1, int v1, ll w1) : u(u1), v(v1), w(w1) {};
};

int n, m, st = 1, en;
ll dis[2501] = {LLONG_MAX};
int parent[2501];
vector<line> a;

void bellmanFord()
{
    dis[1] = 0;

    for (int i = 0; i < n; i++){
        st = 0;

        for (auto l : a){
            if (dis[l.u] < LLONG_MAX && dis[l.u] + l.w < dis[l.v]){
                dis[l.v] = dis[l.u] + l.w;
                parent[l.v] = l.u;
                st = l.v;
            }
        }
    }

    if (!st){
        cout << "NO";
        return;
    }

    for (int i = 0; i < n && st; i++){
        st = parent[st];
    }

    deque<int> cycle;

    for (int en = st;; en = parent[en]){
        cycle.push_front(en);

        if (en == st && cycle.size() > 1)
        {
            break;
        }
    }

    cout << "YES" << endl;
    for (int x : cycle){
        cout << x << " ";
    }

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < m; i++){
        int u, v;
        ll w;
        cin >> u >> v >> w;

        line l(u, v, w);
        a.push_back(l);
    }

    bellmanFord();
    return 0;
}