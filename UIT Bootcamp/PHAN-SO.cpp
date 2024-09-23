#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

int a, b, c , d;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>a>>b>>c>>d;
    int step = 0;

    while(a != c || b != d){
        a++;
        b++;
        int uc = gcd(a, b);
        a /= uc;
        b /= uc;

        if(abs(a - b) == 1 && (c <= a || d <= b) && abs(c - d) != 1){
            step = 0;
            break;
        }
        step++;
    }
    cout<<step<<el;
    
    return 0;
}