#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++) cin>>a[i];

    int res = 0, t = 0, last = 0;
    for(int i = 0; i<n;i++){
        last += n - 2 * a[i] + 1;
        if(last < t){
            t = last;
            res = i + 1;
        }
    }
    cout<<res<<el;

    return 0;
}