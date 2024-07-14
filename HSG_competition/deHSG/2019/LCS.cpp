#include <bits/stdc++.h>
using namespace std;

int binary_research(string n, char ch)
{
    int mid = 0, l = 0, r = n.length();

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (int(n[mid]) == int(ch))
        {
            return true;
        }

        else
        {
            if (int(n[mid]) > int(ch))
            {
                r = mid -1;
            }
            else if (int(n[mid]) < int(ch))
            {
                l = mid +1;
            }
        }
    }
    return false;
}

int main()
{
    fstream fi, out;
    fi.open(".\\datas\\LCS.INP");
    out.open(".\\datas\\LCS.OUT");

    string s1, s2;
    char ch = 'h';
    int num = 0, i=0; // deleted

    fi >> s1;
    fi >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    while(i<s1.length())
    {
        if (binary_research(s2, s1[i]) == 0)
        {
            num++;
        }
        i++;
    }
    i = 0;
    while(i<s2.length())
    {
        if (binary_research(s1, s2[i]) == 0)
        {
            num++;
        }
        i++;
    }

    out << num;
}