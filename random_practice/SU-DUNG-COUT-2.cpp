#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n;
    cin>>n;
    cout<<setw(6)<<setfill('0')<<n<<el;
    cout<<setw(6)<<setfill('#')<<n<<el;
    return 0;
}