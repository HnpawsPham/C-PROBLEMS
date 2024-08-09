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

    map<string,ll> users;
    vector<string> res;

    while (t--)
    {
        string str;
        getline(cin, str);

        users[str]++;

        if(users[str] == 1){
            res.push_back(str);
        }
        else{
            res.push_back(str + to_string(users[str] - 1));
        }
    }

    for(auto x : res){
        cout<<x<<endl;
    }

    return 0;
}