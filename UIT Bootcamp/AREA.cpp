#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int a[5];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(int i = 0; i<4;i++) cin>>a[i];
    sort(a, a + 4);

    int d = min(a[0], a[1]);
    int r = min(a[2], a[3]);
    cout<<d * r<<el;
    return 0;
}