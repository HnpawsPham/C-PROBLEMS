#include <bits/stdc++.h>
using namespace std;

int a,b,m;

int main(){
    ios::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    cin>>a>>b;

    if(a < 0 && b >= 0){
        m = 0;
    }
    else if(a >= 0 && b > 0){
        m = a + 1;
    }
    else if(b < 0){
        m = b - 1;
    }

    cout<<m<<endl;
}