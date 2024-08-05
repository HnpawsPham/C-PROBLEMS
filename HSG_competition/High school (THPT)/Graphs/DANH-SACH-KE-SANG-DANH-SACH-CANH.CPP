#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    cin >> n;
    cin.ignore();

    vector<pair<int,int> > a;

    int u, v;

    for (int i = 0; i < n; i++)
    {
        string str, num;
        getline(cin, str);
        stringstream ss(str);

        while(ss >> num){
            if(stoi(num) > i){
                a.push_back({i + 1, stoi(num)});
            }
        }
    }

    for (auto x : a)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}