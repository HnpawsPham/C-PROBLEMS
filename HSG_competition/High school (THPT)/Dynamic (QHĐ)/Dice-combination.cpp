#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define MOD 1000000007
#define MAXN 1000006

int n;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    vector<int> cnt(n + 1, 0);

    cnt[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if(j <= i){
                cnt[i] = (cnt[i] + cnt[i - j]) % MOD;
            }
            else{
                break;
            }
        }
    }

    cout<<cnt[n]<<endl;

    return 0;
}