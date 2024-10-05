#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"

int n, cnt = 0;
const int maxn = (int)1e6 + 5;
vector<ll> a;

int main(){
    freopen(".\\txt\\CBOBA.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    unordered_map<ll, int> mp;

    for(int i = 0;i<n;i++){
        ll x;
        cin>>x;
        if(!mp[x]){
            a.push_back(x);
            mp[x]++;
        }
    }
    sort(a.begin(), a.end());

    for(int x = 2; x < n;x++){
        int l = 0, r = x - 1;
        ll sum = 0;
        while(l < r){
            sum = a[l] + a[r];

            if(sum == a[x]){
                cnt++;
                break;
            }
            if(sum > a[x]) r--;
            else l++;
        }
    }  
    cout<<cnt<<el;

    return 0;
}