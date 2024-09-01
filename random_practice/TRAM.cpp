#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    int maxx = 0, sum = 0;
    for(int i =0;i<n;i++){
        int a, b;
        cin>>a>>b;
        sum = sum - a + b;
        maxx = max(maxx, sum);
    }

    cout<<maxx<<endl;

    return 0;
}