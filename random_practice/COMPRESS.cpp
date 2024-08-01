#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll a, b, sum = 0;
vector<int> p(4e8);

ll min(ll a, ll b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}

int sieve()
{

    p.assign(min(b, 4e8), 1);

    p[0] = 0;
    p[1] = 0;

    for (ll i = 2; i < sqrt(p.size()); i++)
    {
        if (p[i] == 1)
        {
            for (int j = i * i; j <= b; j += i)
            {
                p[j] = 0;
            }
        }
    }

    return 0;
}

bool isPrime(ll num)
{
    if(num <= 4e8){
        if(p[num] == 1){
            return true;
        }
        return false;
    }}

    if (num <= 2)
    {
        return false;
    }
    if (num == 2 || num == 3)
    {
        return true;
    }
    if (num % 2 == 0)
    {
        return false;
    }

    for (ll i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cin >> a >> b;

    sieve();

    for (ll i = a; i <= b; i++)
    {
        if (i % 2 != 0 && i % 10 != 0 && isPrime(i))
        {
            sum++;
        }
        else
        {
            for (ll j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    sum += j;
                    break;
                }
            }
        }
    }

    cout << sum << endl;

    return 0;
}