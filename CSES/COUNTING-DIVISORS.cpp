#include <bits/stdc++.h>
using namespace std;

int t;

int dem(int x)
{
    int cnt = 1;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            cnt += 2;
            if (i == x / i)
            {
                cnt--;
            }
        }
    }

    if(x > 1){
        cnt++;
    }

    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << dem(n) << endl;
    }

    return 0;
}