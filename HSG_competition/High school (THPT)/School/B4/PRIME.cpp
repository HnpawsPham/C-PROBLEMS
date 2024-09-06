#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n;
const int maxn = 1000001;
int cnt[maxn];

void sieve()
{
    memset(cnt, 0, sizeof(cnt));

    for (int i = 2; i < maxn; i++){
        if (cnt[i] == 0){
            for (int j = i; j < maxn; j += i){
                cnt[j]++;
            }
        }
    }
}

int main()
{
    freopen(".\\txt\\PRIME.INP", "r", stdin);
    freopen(".\\txt\\PRIME.OUT", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sieve();

    int maxcnt = -1, res = -1;
    for (int i = 0; i < n; i++){
        if (maxcnt < cnt[a[i]]){
            maxcnt = cnt[a[i]];
            res = a[i];
        }
    }
    cout << res << el;

    return 0;
}
