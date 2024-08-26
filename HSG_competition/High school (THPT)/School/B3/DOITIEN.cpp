#include <bits/stdc++.h>
using namespace std;
using ll = long long;

fstream fi(".\\txt\\DOITIEN.INP");

ll n, x = 50000;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    fi>>n;

    cout<<(n >= x ? n % x : x - n);

    return 0;
}