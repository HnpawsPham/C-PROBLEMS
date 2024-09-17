#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string n, m;
    cin>>n>>m;
    
    if(n.length() < m.length()) cout<<"29tech"<<el;
    else if(n.length() > m.length()) cout<<"28tech";
    else {
        if(n > m) cout<<"28tech";
        else if(n < m) cout<<"29tech";
        else cout<<"30tech";
    }

    return 0;
}