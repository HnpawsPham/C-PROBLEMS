#include <bits/stdc++.h>
using namespace std;

int n, m;

int main()
{
    cin >> n;

    vector<vector<int>> a(n);

    int x;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> x;

            if(x == 1){
                a[i].push_back(j + 1);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<i + 1<<" : ";

        for(auto x : a[i]){
            cout<<x<<" ";
        }

        cout<<endl;
    }
}