#include <bits/stdc++.h>
using namespace std;

int n, m;

int main()
{
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(a[i][j] != 0 && i < j){
                cout<<i + 1<<" "<<j + 1<<endl;
            }
        }
    }
}