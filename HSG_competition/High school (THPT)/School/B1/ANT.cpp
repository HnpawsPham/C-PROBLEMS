#include <bits/stdc++.h>
#include <fstream>
using namespace std;
using pii = pair<int, int>;
using piii = pair<pair<int, int>, int>;
using ll = long long;

fstream fi(".\\txt\\ANT.INP");

int c;
ll s, cnt = 0;

int dy[] = {-1, 0, 0, 1},
    dx[] = {0, -1, 1, 0};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    fi >> c >> s;

    set<pii> obstacle, visited;

    while (c--)
    {
        int y, x;
        fi >> x >> y;

        obstacle.insert({x, y});
    }

    queue<piii> q;
    q.push({{0, 0}, 0});
    visited.insert({0, 0});

    while (!q.empty())
    {
        piii current = q.front();
        q.pop();

        if (current.second > s)
        {
            break;
        }

        cnt++;

        for (int i = 0; i < 4; i++)
        {
            int i1 = current.first.first + dy[i];
            int j1 = current.first.second + dx[i];
            int step = current.second;

            if (visited.find({i1, j1}) != visited.end() || obstacle.find({i1, j1}) != obstacle.end())
            {
                continue;
            }

            visited.insert({i1, j1});
            q.push({{i1, j1}, step + 1});
        }
    }

    cout << cnt << endl;

    fi.close();
    return 0;
}
