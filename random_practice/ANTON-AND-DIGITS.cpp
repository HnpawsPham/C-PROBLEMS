#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int cnt256 = min(k2, min(k5, k6));
    k2 -= cnt256;
    k5 -= cnt256;
    k6 -= cnt256;

    int cnt32 = min(k2, k3);
    cout << (ll)256 * cnt256 + 32 * cnt32 << endl;

    return 0;
}