#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define el "\n"
#define pli pair<ll, int>

int n, m;
const int maxm = 6;
const int maxn = 100005;
ll a[maxm][maxn];
ll s, sum = 0;

// void solve(int i, ll sum){
//     if(i == m){
//         if(sum == s) sum++;
//         return;
//     }
//     for(int j = 0; j<n;j++){
//         if(sum + a[i][j] <= s) 
//         solve(i + 1, sum + a[i][j]);
//         else return;
//     }
//     return;
// }

vector<ll> getSum(vector<vector<ll>> gr){
    vector<ll> sum = {0};

    for(vector<ll> a : gr){
        vector<ll> sum1;
        for(ll s : sum){
            for(ll x : a){
                sum1.push_back(s + x);
            }
        }
        sum = sum1;
    }

    sort(sum.begin(), sum.end());
    return sum;
}

int main(){
    freopen(".\\txt\\KHOA-SO.INP", "r", stdin);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>m>>n>>s;

    int mid = m / 2;
    vector<vector<ll>> a(mid, vector<ll>(n));
    vector<vector<ll>> b(m - mid, vector<ll>(n));

    for(int i = 0; i < mid ;i++){
        for(int j = 0;j<n;j++) cin>>a[i][j];
    }
    for(int i = 0; i < m - mid; i++){
        for(int j = 0;j<n;j++) cin>>b[i][j];
    }

    vector<ll> sum1 = getSum(a);
    vector<ll> sum2 = getSum(b);

    ll res = 0;
    for(ll x : sum1){
        ll k = s - x;
        
        int l = lower_bound(sum2.begin(), sum2.end(), k) - sum2.begin();
        int r = upper_bound(sum2.begin(), sum2.end(), k) - sum2.begin();
        res += (r - l);
    }
    cout<<res<<el;
   
    return 0;
}