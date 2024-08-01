#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\MATMA.INP"),
    out(".\\txt\\MATMA.OUT");

int n, m, k, x, index=0;
string str;
string r[1000], values[1000];
int pos[1000],cnt[1000];

// sap xep mang theo thu tu tu dien
void arrange()
{
    sort(values, values + m);
}

// thu cac truong hop
void xuli(int i)
{
    if (cnt[i] < k && i <= m)
    {
        if (i == m)
        {
            values[index] = str;
            index++;
        }
        else
        {
            while (cnt[i] < k)
            {
                str[pos[i]] = r[i][cnt[i]];
                cnt[i]++;
                xuli(i + 1);
            }
        }
        cnt[i] = 0;
    }
}

int main()
{
    fi >> n >> m >> k >> x;
    fi >> str;

    // nhap mang
    for (int i = 0; i < m; i++)
    {
        fi >> r[i];
    }

    // lay pos #
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '#')
        {
            pos[dem] = i;
            cout << pos[dem] << " . ";
            dem++;
        }
    }

    xuli(0);
    arrange();

    // check mang
    for (int i = 0; i < n; i++)
    {
        cout << values[i] << endl;
    }
    // xuat file out
    out << values[x - 1] << endl;

    fi.close();
    out.close();
}