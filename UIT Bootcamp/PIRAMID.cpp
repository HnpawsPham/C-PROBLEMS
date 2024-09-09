#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;
using int128 = __int128_t;

int t;

int main(){
    freopen(".\\txt\\PIRAMID.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin>>t;
    while(t--){
        ll n, m;
        cin>>n>>m;
        int128 r = (int128)n * (n + 1) * (3 * m - n + 1)/6;

        string str = "";
        while(r > 0){
            str = char(r%10+48) + str;
            r/=10;
        }
        cout<<str<<el;
    }

    return 0;
}