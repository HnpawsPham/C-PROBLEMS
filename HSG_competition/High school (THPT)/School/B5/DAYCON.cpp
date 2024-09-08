#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pii pair<int, int>
#define el "\n"

int n;
const int maxn = 1e6 + 1;
bool b[maxn] = {false};

void sieve(){
    b[1] = b[0] = true;
    for(int i = 2; i <= sqrt(maxn); i++){
        if(!b[i]){
            for(int j = i * i; j<maxn; j+=i){
                b[j] = true;
            }
        }
    }
    return;
}

int main(){
    freopen(".\\txt\\DAYCON.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    queue<pii> q;
    sieve();
    
    int lastPrime = -1;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        if(!b[x]){
            if(lastPrime != -1) q.push({lastPrime, i});
            lastPrime = i;
        }

        if(!q.empty()){
            cout<<q.front().second - q.front().first<<el;
            return 0;
        }
    }
    cout<<-1<<el;
    return 0;
}