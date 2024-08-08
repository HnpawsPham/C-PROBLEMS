#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int t;

ll max(ll a, ll b){
    if(a>b){
        return a;
    }
    return b;
}

int main()
{
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    cin.ignore();
    
    while (t--)
    {
        string str;
        getline(cin, str);

        map<char, ll> a;

        for(auto x : str){
            a[x]++;
        }

        ll maxap = 0;

        char res;

        for(auto x : a){
            if(x.second > maxap){
                maxap = x.second;
                res = x.first;
            }
        }

        cout<<res<<endl;
    }

    return 0;
}