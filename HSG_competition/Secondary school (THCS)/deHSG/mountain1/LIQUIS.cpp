#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\LIQUIS.INP"),
    out(".\\txt\\LIQUIS.OUT");

int n;
int a[1000];
int sub[1000] = {1};
int maxlength = 0;
int values[1000];

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int quyhoachdong(int index)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = -1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                sub[i] = max(sub[i], sub[j] + 1);

                if (sub[i] > maxlength)
                {
                    values[index]=a[i];
                    index++;
                    maxlength = sub[i];
                }
            }
        }
    }
    return maxlength;
}

int main()
{
    fi >> n;
    for (int i = 0; i < n; i++)
    {
        fi >> a[i];
    }

    // tìm độ dài lớn nhất của dãy con
    out << quyhoachdong(0) << endl;

    // in dãy con
    for (int i = 0; i < maxlength; i++)
    {
        out << values[i] << " ";
    }

    out.close();
}