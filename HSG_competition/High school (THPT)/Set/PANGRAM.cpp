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
    while (t--)
    {
        string str;
        cin>>str;

        set<char> a;

        for(auto ch : str){
            a.insert(tolower(ch));
        }

        if(a.size() >= 26){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}