#include <bits/stdc++.h>
using namespace std;

long long m,n;
long long ucln;

void findUCLN(){
    long long maxx = max(m,n);
    long long minn = min(m,n);
    long long du = maxx % minn;

    while(du != 0){
        maxx = minn;
        minn = du;
        du = maxx % minn;
    }

    ucln = minn;
}

int main(){
    cin>>n>>m;

    findUCLN();
    cout<<ucln<<endl;
    cout<<n/ucln<<" "<<m/ucln;
}