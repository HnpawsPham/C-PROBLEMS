#include <bits/stdc++.h>
using namespace std;

string str, s;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> str >> s;
    ;
    int n = str.length();
    int m = s.length();

    // INIT LPS ARR (POS J FOR SUFFIX = PREFIX)
    int lps[m + 1] = {0};
    int i = 1, j = 0;

    while (i < m)
    {
        if (s[i] == s[j])
        {
            i++;
            j++;
            lps[i] = j;
        }
        else
        {
            if (j == 0)
            {
                lps[i] = 0;
                i++;
            }
            else
            {
                j = lps[j - 1];
            }
        }
    }

    // FIND IF SUBSTRING EXISTS
    i = 0, j = 0;
    deque<int> res;

    while (n - i >= m - j)
    {
        if (str[i] == s[j])
        {
            i++;
            j++;
        }

        if (j == m)
        {
            int st = i - m + 1;
            while (i >= st)
            {
                res.push_front(i);
                i--;
            }

            cout << "YES" << endl;
            for(int x : res){
                cout<<x<<" ";
            }
            return 0;
        }
        else if (i < n && str[i] != s[j])
        {
            if (j == 0)
            {
                i++;
            }
            else
            {
                j = lps[j - 1];
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}