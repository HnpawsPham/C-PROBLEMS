#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, k;

int main(){
    cin>>n>>k;

    vector< pair<ll, ll> > a(n - 1);

    for(ll i = 0; i < n; i++){
        cin>>a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    ll l = 0, m, r = n - 1;
    ll sum = a[r].first + a[l].first;

    while(sum >= k){
        sum -= a[r].first;
        r--;
        sum += a[r].first;
    }

    while(l + 1 < r){   
        m = l + 1;

        while(m < r && m > l){
            sum += a[m].first;
            cout<<sum<<endl;

            if(sum == k){
                cout<<a[l].second<<" "<<a[m].second<<" "<<a[r].second<<endl;
                return 0;
            }

            sum -= a[m].first;
            
            if(sum > k){
                m--;
            }
            else{
                m++;     
            }   
        }

        if(sum > k){
            cout<<"IMPOSSIBLE"<<endl;
            return 0;
        }

        sum -= a[l].first;
        l++;
        sum += a[l].first;
    }    

    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}