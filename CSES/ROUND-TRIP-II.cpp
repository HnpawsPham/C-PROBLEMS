#include <bits/stdc++.h>
using namespace std;

int n, m, st, en;
vector<vector<int>> a((int)1e5 + 1);
int parent[(int)1e5 + 1];
int check[(int)1e5 + 1] = {0};

bool dfs(int u)
{
    check[u] = 1;

    for (auto v : a[u])
    {
        if (check[v] == 0)
        {
            parent[v] = u;
            
            if(dfs(v)){
                return true;
            }
        }
        else if (check[v] == 1)
        {
            st = v;
            en = u;

            return true;
        }
    }

    check[u] = 2;
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;

        a[u].push_back(v);
    }

    for (int i = 1; i <= n; i++)
    {
        if (check[i] != 0)
        {
            continue;
        }

        if (dfs(i))
        {
            deque<int> cycle;

            while (en != st)
            {
                cycle.push_front(en);
                en = parent[en];
            }

            cycle.push_back(st);
            cycle.push_front(st);

            cout << cycle.size() << endl;

            for (auto x : cycle)
            {
                cout << x << " ";
            }

            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}