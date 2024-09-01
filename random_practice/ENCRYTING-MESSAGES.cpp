#include <bits/stdc++.h>
using namespace std;

int n, m, c;
const int maxn = 100001;
int t[maxn] = {0};

void update(int i, int del)
{
    while (i <= n)
    {
        t[i] += (t[i] + del) % c;
        i += (i & -i);
    }
}

int sum(int i)
{
    int res = 0;
    while (i > 0)
    {
        res = (res + t[i]) % c;
        i -= (i & -i);
    }

    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> c;
    int a[n], b[m], res[n];
    memset(res, 0, sizeof(res));

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int sum = 0;
    for(int i = 0;i<n;i++){
        if (i < m) sum += b[i];

        a[i] = (a[i] + sum) % c;    
        // neu i la phan tu cuoi cua mang b (i bat dau tu 0), tru phan tu dau mang b (vi cong don)
        if(i >= n - m) sum -= b[i - (n - m)]; 

        cout<<a[i]<<" ";
    }

    return 0;
}