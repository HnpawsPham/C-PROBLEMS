#include <bits/stdc++.h>
using namespace std;

string str;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> str;
    str = "0" + str;

    int maxlen = 0;
    int current = 1;

    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == str[i - 1])
        {
            current++;
            maxlen = max(maxlen, current);
        }
        else
        {
            current = 1;
        }
    }

    cout<<max(maxlen, 1)<<endl;

    return 0;
}