#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\VIECNHA.INP"),
    out(".\\txt\\VIECNHA.OUT");

int t, c, sl=0;
int a[100];

void findMax()
{
    // thoa man <=t; max so luong;
    for (int j = 0; j < c; j++)
    {
        int sum = 0;
        int cnt=0;
        for (int i = j; i < c; i++)
        {
            if (sum + a[i] <= t)
            {
                cout<<a[i]<<" ";
                sum += a[i];
                cnt++;
            }
        }
        cout<<endl;
        sl=max(sl,cnt);
    }
}

int main()
{
    fi >> t;
    fi >> c;

    for (int i = 0; i < c; i++)
    {
        fi >> a[i];
    }

    findMax();
    out<<sl<<endl;

    fi.close();
    out.close();
}