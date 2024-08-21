#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\DELARR.INP");

int n, m;
vector<int> t(300001, 0);

void update(int i, int del)
{
    while (i <= n)
    {
        t[i] += del;
        i += (i & -i);
    }
}

int sum(int i)
{
    int res = 0;

    while (i > 0)
    {
        res += t[i];
        i -= (i & -i);
    }

    return res;
}

int binarySearch(int x)
{
    int l = 1, r = n;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        int current = sum(mid);

        if (current == x)
        {
            return mid;
        }

        if (current > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    fi >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        update(i, 1);
    }

    while (m--)
    {
        int t;
        fi >> t;

        cout << binarySearch(t) << endl;

        if (t > 0)
        {
            update(t, -1);
        }
    }

    return 0;
}