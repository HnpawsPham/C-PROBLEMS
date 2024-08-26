#include <bits/stdc++.h>
using namespace std;

int n, m, t;

int dem(int x)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            cnt += 2;

            if (i == n / i)
            {
                cnt--;
            }
        }
    }

    cnt += (x == 1 ? 0 : 1);
    return cnt;
}

// CACH 1: TOI UU
void solve()
{
    cin >> n >> m;
    int a[n][m];
    int dp[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    dp[0][0] = dem(a[0][0]);

    for (int i = 1; i < n; i++)
    {
        dp[i][0] = dp[i - 1][0] + dem(a[i][0]);
    }

    for (int j = 1; j < m; j++)
    {
        dp[0][j] = dp[0][j - 1] + dem(a[0][j]);
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            dp[i][j] = min(dp[i][j - 1], dp[i - 1][j]) + dem(a[i][j]);
        }
    }

    cout << dp[n - 1][m - 1] << endl;
}

// CACH 2
int find(int i, int j, int n, int m, vector<vector<int>> a, int &sum)
{
    while(i < n - 1 || j < m - 1){
        int right = dem(a[i][j + 1]);
        int down = dem(a[i + 1][j]);

        sum+= min(right, down);

        i+= (i < n ? 1 : 0);
        j+= (j < m ? 1 : 0);
    }
}

int main()
{
    freopen(".\\txt\\CHIPHI.INP", "r", stdin);

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        // vector<vector<int>> a(n, vector<int> (m));
        // int sum = dem(a[0][0]);
        // find(0,0,n,m,a,sum);
        // cout<<sum<<endl;

        solve();
    }

    return 0;
}