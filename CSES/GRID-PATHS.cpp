#include <bits/stdc++.h>
using namespace std;
#define el "\n"
#define MOD 1000000007

int n;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    char a[n][n];
    int cntpath[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cntpath[0][0] = 1;
    for (int j = 1; j < n; j++)
    {
        cntpath[0][j] = 0;
        if (a[0][j] == '*') continue;
        cntpath[0][j] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        cntpath[i][0] = 0;
        if (a[i][0] == '*') continue;
        cntpath[i][0] = 1;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            cntpath[i][j] = 0;

            if (a[i][j] == '*') continue;
            if(a[i][j - 1] != '*') cntpath[i][j] = (cntpath[i][j] + cntpath[i][j - 1]) % MOD;
            if(a[i - 1][j] != '*') cntpath[i][j] = (cntpath[i][j] + cntpath[i - 1][j]) % MOD;
        }
    }
    cout << cntpath[n - 1][n - 1] << el;

    return 0;
}