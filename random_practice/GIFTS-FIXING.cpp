#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll a[n], b[n];
        ll mina = LLONG_MAX, minb = LLONG_MAX, cnt = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mina = min(mina, a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            minb = min(minb, b[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] != mina && b[i] != minb)
            {
                if (a[i] - mina > b[i] - minb)
                {
                    ll minus = b[i] - minb;
                    cnt = cnt + minus + (a[i] - minus - mina);
                }
                else
                {
                    ll minus = a[i] - mina;
                    cnt = cnt + minus + (b[i] - minus - minb);
                }
            }
            else
            {
                if (a[i] > mina)
                {
                    cnt += a[i] - mina;
                }

                if (b[i] > minb)
                {
                    cnt += b[i] - minb;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}