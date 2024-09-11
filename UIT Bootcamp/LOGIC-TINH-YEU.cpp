#include <bits/stdc++.h>
using namespace std;
#define el "\n"

bool young, pretty, inrela, rich;

bool check(){
    if(young && !pretty) return 0;
    if(pretty && !inrela) return 0;
    if(!pretty && inrela && !rich) return 0;

    return 1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>young>>pretty>>inrela>>rich;
    cout<<check()<<el;

    return 0;
}