#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> a(10001);
vector<int> check(10001, 0),
    in(10001, 0);
deque<int> path;

bool kahn()
{
    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        if (in[i] == 0)
        {
            q.push(i);
        }
    }

    int cnt = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        cnt++;

        for (auto v : a[u])
        {
            in[v]--;

            if (in[v] == 0)
            {
                q.push(v);
            }
        }
    }

    return cnt == n;
}

void dfs(int u)
{
    check[u] = 1;
    path.push_back(u);

    for (auto v : a[u])
    {
        if (check[v] == 0)
        {
            dfs(v);
        }
        else if (check[v] == 1)
        {
            cout<<"YES"<<endl;

            cout<<v<<" ";

           for(auto it = path.rbegin(); *it != v; it++){
                if(*it == v){
                    break;
                }

                cout<<*it<<" ";
           }

            cout<<v<<endl;
            
            check[v] = 1;
        }
    }

    path.pop_back();
    check[u] = 2;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;

        a[u].push_back(v);
        in[v]++;
    }

    bool hasCycle = false;

    for (int i = 1; i <= n; i++)
    {
        if (check[i] == 0)
        {
            hasCycle = true;

            dfs(i);
        }
    }

    if(!hasCycle){
        cout << "NO" << endl;
    }

    // cout << (kahn() ? "YES" : "NO") << endl;

    return 0;
}

// 7 7
// 1 2
// 1 5
// 4 2
// 2 3
// 3 6
// 6 7
// 7 3