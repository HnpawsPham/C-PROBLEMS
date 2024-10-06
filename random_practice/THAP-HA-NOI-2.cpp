#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define MOD 1000000007

int n, res = INT_MAX;
ll steps;
string str;

ll customPow(ll a, ll b){
    if(b == 0) return 1;
    if(b % 2 == 0) return customPow(a, b / 2) * customPow(a, b / 2);
    else return customPow(a, b/ 2) * customPow(a, b / 2) * a;
}

string toBin(int x){
    string res = "";
    while(x > 0){
        if(x & 1) res += '1';
        else res += '0';
        x >>= 1;
    }
    return res;
}

void solve(string s, int cnt){
    res = cnt;
    cout<<s<<el;
    if(bitset<32>(s).to_ulong() == steps){
        return;
    }

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1' && steps - i >= n){
            string s1 = s;
            s1[i] = '0';
            s1[(i + n) % (steps + 2)] = '1';
            solve(s1, cnt + 1);
        }
    }
    return;
}

int main(){
    freopen(".\\txt\\THAP-HA-NOI-2.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>str;
    steps = customPow(2, n) - 1;

    solve(str, 0);
    cout<<res<<el;

    return 0;
}