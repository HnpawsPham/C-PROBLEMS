#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n;
const int maxn = 1000001;
bool b[maxn] = {false};
int cnt[maxn];

void sieve()
{
    memset(cnt, 0, sizeof(cnt));
    b[1] = b[0] = true;

    for (int i = 2; i < (int)sqrt(maxn); i++){
        if (!b[i]){
            for (int j = i * i; j < maxn; j += i){
                b[j] = true;
                cnt[j]++;
            }
        }
    }
}

int main()
{
    freopen(".\\txt\\PRIME.INP", "r", stdin);
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
