#include <bits/stdc++.h>
using namespace std;
#define el "\n"

int n;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    for(int i = 0; i < (1 << n); i++){
        string str = "";
        for(int j = n - 1; j >=0; j--){
          str = str + (i & (1 << j) ? '1' : '0');
        }
        cout<<str<<el;
    }
    return 0;
}