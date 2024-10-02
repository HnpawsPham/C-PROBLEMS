#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

ll n;

ll sumCh(ll x){
    int sum = 0;
    string str = to_string(x);
    int m = str.length();
    for(int i = 0; i<m;i++){
        sum += int(str[i] - '0');
    }
    return sum;
}

ll sumPt(ll x){
    ll sum = 0;

    if(x % 2 == 0){
        while(x % 2 == 0){
            sum += 2;
            x /=2;
        }
    }

    for(ll i = 3; i<=x; i+=2){
        if(x % i == 0){
            ll sum2 = sumCh(i);
            x/=i;

            while(x % i == 0){
                sum2 += sum2;
                x/=i;
            }
            sum += sum2;
        }
    }
    return sum;
}

int main(){
    freopen(".\\txt\\SPNUM.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    while(true){
        n++;
        ll sum1 = sumCh(n);
        ll sum2 = sumPt(n);
        if(sum1 == sum2) break;
    }
    cout<<n<<el;

    return 0;
}