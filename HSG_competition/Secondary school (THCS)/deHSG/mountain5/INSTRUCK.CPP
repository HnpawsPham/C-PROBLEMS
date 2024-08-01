#include <bits/stdc++.h>
using namespace std;

int a,b,res=0,pos=1;

int main() {
    cin>>a>>b;


    for (int i = 1; i <= b; pos++) {
        for (int j = 1; j <= pos && i <= b; j++, i++){
            if (i >= a) {
                res += pos;
            }
                    cout<<"i: "<<i<<" j: "<<j<<" pos: "<<pos<<endl;
        }
    }

    cout<<res<<endl;
}
