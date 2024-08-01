#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\CHONOI.INP"),
    out(".\\txt\\CHONOI.OUT");

int n, k, sc = 0;
int a[1000000];

int main()
{
    fi >> n >> k;
    for (int i = 0; i < n; i++)
    {
        fi >> a[i];
    }

    // tim so cach
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] <= k)
            {
                cout<<a[i]<<" "<<a[j]<<endl;
                sc++;
            }
        }
    }

    out << sc << endl;

    fi.close();
    out.close();
}