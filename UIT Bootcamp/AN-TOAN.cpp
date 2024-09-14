#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n, m ,k;
const int maxn = 102;
char a[maxn][maxn];


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    cin>>n>>m>>k;
    for(int i = 0; i<n;i++){
        for(int j = 0;j<m;j++){
            a[i][j] = '.';
        }
    }
    if(k > min(n, m)){
        cout<<"Impossible"<<el;
        return 0;
    }
    int t = 0;
    for(int i = 0; i<n;i++){
        a[i][t] = '*';
        t++;
        if(t == k) break;
    }

    cout<<"Possible"<<el;
    for(int i =0;i<n;i++){
        for(int j = 0; j<m;j++){
            cout<<a[i][j];
        }
        cout<<el;
    }

    return 0;
}