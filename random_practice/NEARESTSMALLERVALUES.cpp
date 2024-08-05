#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n;

ll max(ll a, ll b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int main()
{
    cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll minn;

    for (int i = 0; i < n; i++)
    {
        minn = -1;
        bool isSet = false;

        for (int j = 0; j < i; j++)
        {
            if (a[j]< a[i])
            {
                minn = max(minn, j + 1);
                isSet = true;
            }
        }

        if (isSet)
        {
            cout << minn << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}