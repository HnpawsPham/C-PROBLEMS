#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    vector<int> a(n);

    for (int i = 1; i <= n - 1; i++)
    {
        int x;
        cin >> x;

        a[x] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}