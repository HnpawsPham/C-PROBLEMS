#include <bits/stdc++.h>
using namespace std;

int n, m;

int main()
{
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(n));

    int u, v;

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        a[u - 1][v - 1] = 1;
        a[v - 1][u - 1] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}