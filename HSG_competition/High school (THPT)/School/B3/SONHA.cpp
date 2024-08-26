#include <bits/stdc++.h>
using namespace std;
using ll = long long;

fstream fi(".\\txt\\SONHA.INP");

ll n, s = 80000;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fi >> n;
    int cnt = 0, t = n;
    while (t > 0)
    {
        t /= 10;
        cnt++;
    }

    ll sum = 0;

    for (int i = 0; i < cnt - 1; i++)
    {
        sum += 9 * pow(10, i);
    }
    sum += (n - sum) * cnt;
    cout<<sum * s<<endl;

    return 0;
}