#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\EVA.INP");

int n, k, m;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    fi >> n >> m;
    int cnt = 0;

    for (int i = 0; i < m; i++)
    {
        int x;
        fi >> x;

        cout<<((x + cnt > n) ? 0 : x + cnt)<<endl;
        cnt++;
    }

    return 0;
}