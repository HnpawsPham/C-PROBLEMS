#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

int n, m;
char a[1001][1001];
int dir[1001][1001];

string direction = "ULRD";

int dy[] = {-1, 0, 0, 1},
    dx[] = {0, -1, 1, 0};

bool bfs(int i, int j)
{
    queue<pii> q;
    q.push({i, j});
    a[i][j] = '#';

    while (!q.empty())
    {
        pair<int, int> current = q.front();
        q.pop();

        for (int x = 0; x < 4; x++)
        {
            int i1 = current.first + dy[x];
            int j1 = current.second + dx[x];

            if (i1 < 0 || i1 >= n || j1 < 0 || j1 >= m || a[i1][j1] == '#') continue;

            dir[i1][j1] = x;

            if (a[i1][j1] == 'B')
            {
                return true;
            }

            a[i1][j1] = '#';
            q.push({i1, j1});
        }
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    pii st, end;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];

            if (a[i][j] == 'A')
            {
                st = make_pair(i, j);
            }
            else if(a[i][j] == 'B'){
                end = make_pair(i, j);
            }
        }
    }

    if (!bfs(st.first, st.second))
    {
        cout << "NO";
        return 0;
    }

    cout<<"YES"<<endl;
    
    deque<int> path;
    while(end != st){
        int x = dir[end.first][end.second];
        path.push_front(x);

        end = make_pair(end.first - dy[x], end.second - dx[x]);
    }

    cout<<path.size()<<endl;

    for(auto x : path){
        cout<<direction[x];
    }

    return 0;
}