#include <bits/stdc++.h>
#include <string>
using namespace std;
using ll = long long;

fstream fi(".\\txt\\NHATKY.INP");

int n, q;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    fi >> n;
    fi.ignore();
    vector<ll> a;

    string str, num, t;
    getline(fi, str);

    stringstream ss(str);

    while (ss >> num)
    {
        if (!t.empty())
        {
            a.push_back(stoll(t));
            t = "";
        }

        for (int i = 0; i <= num.length(); i++)
        {

            if (isdigit(num[i]) || (num[i] == '-' && t.empty()))
            {
                t = t + num[i];
            }
            else
            {
                if (!t.empty())
                {
                    a.push_back(stoll(t));
                    t = "";
                }
            }
        }
    }

    fi >> q;

    int l = 0, r = a.size() - 1, cnt = 0;
    ll sum = 0;
    sort(a.begin(), a.end());

    while (l < r && r < a.size())
    {
        sum = a[l] + a[r];
        if (sum == q)
        {
            cnt++;

            while(l < r && a[l] == a[l + 1]){
                cnt++;
                l++;
            }

            while(l < r && a[r] == a[r - 1]){
                cnt++;
                r--;
            }

            l++;
            r--;
        }
        else if (sum > q)
        {
            r--;
        }
        else
        {
            l++;
        }
    }

    cout << cnt << endl;

    return 0;
}