#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n, k;

int main()
{
    cin >> n >> k;

    vector<pair<ll, ll>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    ll sum = 0;
    ll l,r;

    for(int i = 0; i < n - 3; i++){
        for(int j = i + 1; j < n - 2; j++){
            l = j + 1;
            r = n - 1;

            while(l < r){
                sum = a[i].first + a[j].first + a[l].first + a[r].first;

                if(sum == k){
                    cout<<a[i].second<<" "<<a[j].second<<" "<<a[l].second<<" "<<a[r].second;
                    return 0;
                }

                if(sum > k){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
