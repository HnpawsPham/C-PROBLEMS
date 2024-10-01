#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

ll n;

void sumCh(ll x){
    int sum = 0;
    string str = to_string(x);
    int m = str.length();
    for(int i = 0; i<m;i++){
        sum += int(str[i] - '0');
    }
    return sum;
}

void sumPt(ll x){
    ll sum = 0;

    if(x % 2 == 0){
        while(x % 2 == 0){
            sum += 2;
            x /=2;
        }
    }

    for(int i = 3; i<=x; i+=2){
        if(x % i == 0){
            string str = to_string(i);
            int m = str.length();
            int sum2 = 0;

            for(int j = 0; j<m;j++){
                sum2 += int(str[j] -'0');
            }
            x/=i;

            while(x % i == 0){
                sum2 *=2;
                x/=i;
            }
            sum += sum2;
        }
    }
    return sum;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;

    return 0;
}