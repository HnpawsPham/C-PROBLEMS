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
        string str, num;
        getline(cin, str);

        set<string> s;

        stringstream ss(str);

        while(ss >> num){
            s.insert(num);
        }

        cout<<s.size()<<endl;
    }   

    return 0;
}