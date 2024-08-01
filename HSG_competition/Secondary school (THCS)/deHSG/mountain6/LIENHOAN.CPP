#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\LIENHOAN.INP"),
    out(".\\txt\\LIENHOAN.OUT");

int n, k, sl = 0;

int main()
{
    fi >> n >> k;

    if (n % k == 0)
    {
        out << n / k * 6 << endl;
    }
    else
    {
        int remain = n % k;
        
        if (remain <= k / 2)
        {
            out << n / k * 6 + 3 << endl;
        }
        else
        {
            out << n / k * 6 + 6 << endl;
        }
    }

    fi.close();
    out.close();
}