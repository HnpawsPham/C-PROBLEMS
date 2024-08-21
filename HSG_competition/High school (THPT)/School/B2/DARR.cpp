#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\DARR.inp");

int n, ans = 0;

void solve(vector<int> &a)
{
    sort(a.begin(), a.end());

    for (int i = n - 2; i >= 0; i--)
    {
        if(a[i] < ans){
            break;
        }

        for(int k = 2; k <= a[n - 1] / a[i] + 1; k++){
            int j = lower_bound(a.begin() + i, a.end(), a[i] * k) - a.begin() - 1;
            ans = max(ans, a[j] % a[i]);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    fi >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        fi >> a[i];
    }

    solve(a);

    cout << ans << endl;

    return 0;
}