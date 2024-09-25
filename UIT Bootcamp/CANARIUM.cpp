#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

int t;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>t;
    while(t--){
        ll k;
        cin>>k;

        ll n = -1, m = -1, minn = LLONG_MAX;
        for(int x = 1; x * x <= 4 * k - 1; x+=2){
            if((4 * k - 1) % (2 * x + 1) != 0) continue;
            ll y = ((4 * k - 1) / (2 * x + 1) -1) / 2;
           
            if(x <= y && abs(x - y) < minn){
                m = x;
                n = y;
                minn = abs(x - y);
            }
        }
        cout<<m<<" "<<n<<el;
    }
    
    return 0;
}