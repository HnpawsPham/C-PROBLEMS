#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\RANNUM.INP"),
    out(".\\txt\\RANNUM.OUT");

int n;
int a[1000];
int sub[1000];

bool check(int elm, int limit, int start)
{
    for (int i = start; i < limit; i++)
    {
        if (a[i] == elm)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    fi >> n;
    int dem=n, limit, start,k=n;

    for (int i = 0; i < n; i++)
    {
        fi >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        limit = 1;
        dem=1;
        start = 0;
        while (limit<=n)
        {
            cout<<"a[i] "<<a[i]<<" start "<<start<<" limit "<<limit<<" dem: "<<dem<<endl;
            if (!check(a[i], limit, start))
            {
                dem++;
                start=0;
            }
            else{
                start++;
            }
            limit=start+dem;
        }
        if(dem<k){
            k=dem;
        }
    }
    out <<k;
}