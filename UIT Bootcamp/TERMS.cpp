#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, t;
    cin>>n>>k;
    t = n - k*(k - 1)/2;

    if(t < k){
        cout<<-1<<el;
        return 0;
    }

    cout<<k<<el;
    for(int i = 1; i<k;i++){
        cout<<i<<" ";
    }
    cout<<t<<el;

    return 0;
}