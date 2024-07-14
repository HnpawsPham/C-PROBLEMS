#include <bits/stdc++.h>
using namespace std;
fstream fi(".\\txt\\SOLE.INP"),
    out(".\\txt\\SOLE.OUT");

long long a, b, cnt = 0;

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}

bool checkSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += fmod(num, 10);
        num /= 10;
    }

    if (fmod(sum, 2) != 0)
    {
        return true;
    }
    return false;
}

int main()
{
    fi >> a >> b;

    // 1-10
    if (fmod(b, 10) == b || b == 10)
    {
        for (int i = a; i <= b; i++)
        {
            if (i % 2 != 0)
            {
                cnt++;
            }
        }
    }
    // 10+ & max-min tròn chục
    else if (fmod(max(a, b) - min(a, b), 10) == 0)
    {
        cnt = (max(a, b) - min(a, b)) / 10 * 5;
    }
    else
    {
        for (int i = a; i <= b; i++)
        {
            if (fmod(i, 10) != 0)
            {
                if (fmod(i, 100) == i && fmod(i, 10) != i / 10)
                {
                    if (checkSum(i))
                    {
                        cnt++;
                    }
                }
                else
                {
                    if (checkSum(i))
                    {
                        cnt++;
                    }
                }
            }
            else
            {
                while (fmod(b, 10) != 0)
                {
                    if (checkSum(b))
                    {
                        cnt++;
                    }
                    b--;
                }

                if (b > a && fmod(b, 10) == 0)
                {
                    cnt += (max(i, b) - min(i, b)) / 10 * 5;
                    break;
                }
            }
        }
    }

    cout << cnt << endl;
    out<<cnt<<endl;
    // EM K BIET CO DUNG HET 100% K, NHUNG CACH NAY RA KET QUA RAT NHANH
}