#include <bits/stdc++.h>
using namespace std;

int n, s;
vector<int> a(10001);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> s;
    a.resize(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    cout << (s > 1 ? to_string(1) : "NO");
    return 0;
}