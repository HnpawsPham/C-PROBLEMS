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
    
    if(a[0][0] == '*') {
        cout<<0<<el;
        return 0;
    }
    
    cntpath[0][0] = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == 0 && j == 0) continue;
            cntpath[i][j] = 0;

            if (a[i][j] == '*') continue;

            if(j > 0){
                if(a[i][j - 1] != '*') cntpath[i][j] = (cntpath[i][j] + cntpath[i][j - 1]) % MOD;
            }
            if(i > 0){
                if(a[i - 1][j] != '*') cntpath[i][j] = (cntpath[i][j] + cntpath[i - 1][j]) % MOD;
            }
        }
    }
    cout << cntpath[n - 1][n - 1] << el;

    return 0;
}