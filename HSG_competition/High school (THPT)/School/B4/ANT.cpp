#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define pii pair<int, int>
#define MOD 100000007

int n, m, cnt = 0;
const int maxn = 1001;
const ll maxll = 1e9;
int a[maxn][maxn], cntpath[maxn][maxn], pathlen[maxn][maxn];

int dy[] = {-1, 0, 0, 1},
    dx[] = {0, -1, 1, 0};

void bfs(int i, int j)
{
    queue<pii> q;
    q.push({i, j});
    cntpath[i][j] = 1;
    pathlen[i][j] = 0;

    while (!q.empty())
    {
        pii cur = q.front();
        q.pop();

        for (int x = 0; x < 4; x++)
        {
            int i1 = cur.first + dy[x];
            int j1 = cur.second + dx[x];

            if (i1 < 1 || i1 > n || j1 < 1 || j1 > m || a[i1][j1] == 0)
                continue;

            if(pathlen[i1][j1] > pathlen[cur.first][cur.second] + 1){
                pathlen[i1][j1] = pathlen[cur.first][cur.second] + 1;
                cntpath[i1][j1] = cntpath[cur.first][cur.second];
                q.push({i1, j1});
            }
            else if(pathlen[i1][j1] == pathlen[cur.first][cur.second] + 1)
            cntpath[i1][j1] = (cntpath[i1][j1] + cntpath[cur.first][cur.second]) % MOD;
        }
    }
    return;
}

int main()
{
    freopen(".\\txt\\ANT.INP", "r", stdin);
    freopen(".\\txt\\ANT.OUT", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        string str;
        cin >> str;

        for (int j = 0; j < str.length(); j++)
        {
            a[i][j + 1] = int(str[j] - '0');
            cntpath[i][j + 1] = 0;
            pathlen[i][j + 1] = maxll;
        }
    }

    bfs(1, 1);
    cout << cntpath[n][m] << el;
    cout << pathlen[n][m] << el;

    return 0;
}