#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    cin >> n;
    cin.ignore();

    vector<vector<int> > a(n, vector<int>(n));

    int x;

    for (int i = 0; i < n; i++)
    {
        string str, num;
        getline(cin, str);
        stringstream ss(str);

        while(ss >> num){
            a[i][stoi(num) - 1] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}