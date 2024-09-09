#include <bits/stdc++.h>
#define el "\n"
using namespace std;
using ll = long long;

int n, k;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>k;
    int a[n];
    iota(a, a + k, 2);
    iota(a + k, a + n, 1);

    srand(0);
    random_shuffle(a, a + n);
    for(int x : a){
        cout<<x<<" ";
    }
    cout<<el;
    random_shuffle(a, a + n);
    for(int x : a){
        cout<<x<<" ";
    }
    return 0;
}