#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MAX 1000000

vector<ll> a(MAX, 1);

int sieve()
{
    a[0] = a[1] = 0;

    for (ll i = 2; i <= sqrt(MAX); i++)
    {
        if (a[i] == 1)
        {
            for (int j = i * i; j < MAX; j += i)
            {
                a[j] = 0;
            }
        }
    }

    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;

    ll res = 0;
    int len = str.length();

    sieve();

    for (int i = 0; i < len; i++)
    {
        if (isdigit(str[i]))
        {
            int j = i;
            string substr = "";

            while (isdigit(str[j]) && j < len)
            {
                substr += str[j];

                ll x = stoll(substr);
                if (a[x] == 1)
                {
                    res = max(x, res);
                }

                j++;
            }
        }
    }

    if (res != 0)
    {
        cout << res;
    }
    else
    {
        cout << "NO";
    }

    return 0;
}