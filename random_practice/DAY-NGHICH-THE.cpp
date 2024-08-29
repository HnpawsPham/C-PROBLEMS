#include <bits/stdc++.h>
using namespace std;

int n;
const int maxn = 60001;
vector<int> t(maxn, 0);

void update(int i, int del)
{
    while (i > 0)
    {
        t[i] += del;
        i -= (i & -i);
    }
}

int sum(int i)
{
    int res = 0;

    while (i <= n)
    {
        res += t[i];
        i += (i & -i);
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        ans += sum(x + 1);
        update(x, 1);
    }

    cout << ans << endl;

    return 0;
}