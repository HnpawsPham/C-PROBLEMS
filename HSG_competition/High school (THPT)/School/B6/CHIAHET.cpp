#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

ll k;
int n;

int main(){
    freopen(".\\txt\\CHIAHET.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>k>>n;
    set<ll> s;
    for(int i = 0; i < n ;i++){
        ll x;
        cin>>x;
        s.insert(x);

        for(int j = x + x; j <= k; j += x){
            s.insert(j);
        }
    }
    cout<<s.size()<<el;

    return 0;
}