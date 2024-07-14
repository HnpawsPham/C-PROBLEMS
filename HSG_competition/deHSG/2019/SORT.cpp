#include <bits/stdc++.h>
using namespace std;

int divide(int n, int m, int t)
{
    int index = 0, temp = 0, i = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((j+1) % m == i)
            {
                index++;
            }
            if (index == t)
            {
                return j+1;
            }
        }
    }
}

int main()
{
    fstream fi, out;
    fi.open(".\\datas\\SORT.INP");
    out.open(".\\datas\\SORT.OUT");

    int m, n, t;
    fi >> n;
    fi >> m;
    fi >> t;

    out << divide(n, m, t);
}