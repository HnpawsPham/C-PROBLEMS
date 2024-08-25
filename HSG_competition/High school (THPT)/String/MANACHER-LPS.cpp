#include <bits/stdc++.h>
using namespace std;

string str;
vector<vector<int>> dp(3003, vector<int>(3003, 0));

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> str;
    string s = "|";

    for (auto x : str)
    {
        s = s + x + "|";
    }

    int n = s.length(), r = 0, c = 0, res = 0;
    vector<int> p(n, 0);

    for (int i = 1; i < n; i++)
    {
        if (i < r)
        {
            p[i] = min(r - i, p[2 * c - i]);
        }

        while (i - p[i] >= 0 && i + p[i] < n && s[i - p[i]] == s[i + p[i]])
        {
            p[i]++;
        }

        if (i + p[i] >= r)
        {
            r = i + p[i];
            c = i;
        }

        res = max(res, p[i] - 1);
    }

    cout << res << endl;

    return 0;
}