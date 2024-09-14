#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int a, b, n;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

bool solve(){
    int time = 0;
    int k = gcd(a, n);
    while(true){
        n -= k;
        swap(a, b);
        k = gcd(a, n);
        time++;
        if(n < k){
            return (time % 2 == 0);
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>a>>b>>n;
    cout<<solve()<<el;
    return 0;
}