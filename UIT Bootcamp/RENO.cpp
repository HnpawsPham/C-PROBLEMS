#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

ll a, b;
int ia = 1, ib = 2;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>a>>b;
    if(b > a){
        swap(a, b);
        swap(ia, ib);
    }
    int k = a / b + (a % b != 0);
    cout<<ia<<" -"<<k<<el;
    a += (-k * b);
    cout<<ib<<" "<<k<<el;
    b += (k * a);
    cout<<ia<<" -"<<k<<el;
    a += (-k * b);
    return 0;
}