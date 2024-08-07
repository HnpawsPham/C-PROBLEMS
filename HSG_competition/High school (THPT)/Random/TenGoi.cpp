#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;

fstream fi(".\\txt\\TENGOI.inp");

int main()
{
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    fi >> n;

    int maxlen = 0;
    vector<int> res;

    res.push_back(0);

    while (n--)
    {
        string str;
        int cnt = 0, reslen = 0;

        fi >> str;

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] != 'W' && str[i] != 'A' && str[i] != 'R')
            {
                cnt++;
            }
            else
            {
                if (cnt >= maxlen)
                {
                    maxlen = cnt;

                    if (res[res.size() - 1] < maxlen)
                    {
                        res.clear();
                    }

                    res.push_back(cnt);
                }
                cnt = 0;
            }
        }
    }

    if (maxlen > 0)
    {
        cout << maxlen << " " << res.size()<< endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}