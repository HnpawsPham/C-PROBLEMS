#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\SORORANG.INP"),
        out(".\\txt\\SORORANG.OUT");


double sum(int num)
{
    double Sum = 0;
    while (num > 0)
    {
        Sum += pow(num%10,2);
        num /= 10;
    }

    return Sum;
}

bool rorang(int num)
{
    bool save[1000000] = {false};

    while (true)
    {
        num = sum(num);
        if(num==1){
            return true;
        }
        if (save[num] == true)
        {
            return false;
        }
        save[num] = true;
    }
}

int main()
{
    int t,n, m, dem;
    fi >> t;

    // số nhỏ thì nó nhanh ra mà số lớn chạy cháy máy=)))

    while(t--)
    {
        dem=0;
        fi >> n >> m;

        while (dem != m)
        {
            cout<<dem<<endl;
            n++;
            if (rorang(n))
            {
                dem++;
            }
        }
        out<<n<<endl;
    }
}