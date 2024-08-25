#include <bits/stdc++.h>
using namespace std;

string str1;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> str1;

    string str = "";

    for (int i = 0; i < str1.length(); i++)
    {
        str.push_back('|');
        str.push_back(str1[i]);
    }
    str.push_back('|');

    int r = 0, c = 0, n = str.length();
    int p[n + 1] = {0};

    int maxlen = 0, st;
    string res;

    for (int i = 1; i < n; i++)
    {
        if (i < r)
        {
            p[i] = min(r - i, p[c * 2 - i]);
        }

        while (i + p[i] < n && i - p[i] >= 0 && str[i + p[i]] == str[i - p[i]])
        {
            p[i]++;
        }

        if (i + p[i] > r)
        {
            r = i + p[i];
            c = i;
        }

        if (p[i] > maxlen)
        {
            maxlen = p[i];
            st = (i - maxlen + 1) / 2;
        }
    }

    res = str1.substr(st, maxlen - 1);

    cout << res << endl;

    return 0;
}