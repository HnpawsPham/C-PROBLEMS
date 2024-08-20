#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\DARR.inp");

int n, ans = 0;

void solve(vector<int> &a)
{
    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ans = max(ans, a[i] % a[j]);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    fi >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        fi >> a[i];
    }

    solve(a);

    cout << ans << endl;

    return 0;
}