#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

ll a, b;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>a>>b;
    if(b > a && (b - a) % 2 == 0){
        cout<<"FALSE"<<el;
        return 0;
    }
    cout<<"TRUE"<<el;
    return 0;
}