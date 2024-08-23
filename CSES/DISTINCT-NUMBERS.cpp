#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    map<int, int> a;
    
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        a[x]++;
    }

    cout<<a.size()<<endl;

    return 0;
}