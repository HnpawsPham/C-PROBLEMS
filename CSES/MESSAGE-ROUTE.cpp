#include <bits/stdc++.h>
using namespace std;

int n, m;
const int maxn = 100001;
bool check[maxn] = {false};
int parent[maxn];
vector<vector<int>> a(maxn);

void print(int v)
{
    deque<int> path;
    while (v != 1)
    {
        path.push_front(v);
        v = parent[v];
    }
    path.push_front(1);

    cout << path.size() << endl;
    for (int x : path)
    {
        cout << x << " ";
    }
    return;
}

void bfs(int x)
{
    check[x] = true;
    queue<int> q;
    q.push(x);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : a[u])
        {
            if (check[v])
            {
                continue;
            }

            parent[v] = u;
            if (v == n)
            {
                print(v);
                return;
            }

            check[v] = true;
            q.push(v);
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    bfs(1);

    return 0;
}