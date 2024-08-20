#include <bits/stdc++.h>
using namespace std;
// return >= x

int n, s;
vector<int> a(10001);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> s;
    a.resize(n);

    for (auto &x : a)
    {
        cin >> x;
    }
    sort(a.begin(), a.end());

    auto it = lower_bound(a.begin(), a.end(), s);

    if (it == a.end())
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << *it << endl;                // gia tri
    cout << it - a.begin() + 1 << endl; // vi tri

    return 0;
}