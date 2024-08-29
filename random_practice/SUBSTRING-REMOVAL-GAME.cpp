#include <bits/stdc++.h>
using namespace std;

int t;

int getPoint(string str)
{
    priority_queue<int> pq;
    int i = 0, point = 0;

    while (i < str.length())
    {
        if (str[i] == '1')
        {
            int cnt = 0;
            while (str[i] == '1' && i < str.length())
            {
                cnt++;
                i++;
            }
            pq.push(cnt);
        }
        i++;
    }

    while (!pq.empty())
    {
        point += pq.top();
        pq.pop();

        if(!pq.empty()){
            pq.pop();
        }
    }
    return point;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        cout<<getPoint(str)<<endl;
    }

    return 0;
}