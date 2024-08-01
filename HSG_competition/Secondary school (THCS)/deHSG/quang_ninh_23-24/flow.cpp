#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\flow.inp"),
        out(".\\txt\\flow.out");

long long n,m;
long long a[10000000], b[10000000];
int isBought[10000000];
pair<long long, long long> c[10000000];

int main(){
    fi>>n>>m;

    long long maxb=0, maxbindex;

    for(long long i=0; i<n; i++){
        int x, y;
        fi>>a[i]>>b[i];
        c[i] = make_pair(a[i],b[i]);

        if(b[i] > maxb){
            maxb = b[i];
            maxbindex = i;
        }

        isBought[i] = 0;
    }

    sort(c, c+n);

    // for(long long i=0; i<n; i++){
    //     cout<<c[i].first<<" "<<c[i].second<<endl;
    // }

    long long res = 0, sl=0, maxbofa = 0, aofmaxb;

    for(long long i = n-1; i>=0; i--){
        if(c[i].first >= maxb){
            sl++;
            isBought[i] = 1;

            res+=c[i].first;
            maxbofa = max(maxbofa, c[i].second);

            if(c[i].second > maxbofa){
                maxbofa = c[i].second;
                aofmaxb = c[i].first;
            }
        }
    }

    int sum;
    if(isBought[maxbindex] == 0){
        sum = res + (maxb * (m-sl-1)) + a[maxbindex];
    }
    else{
        sum = res + (maxb * (m-sl));
    }

    cout<<sum<<endl;

    fi.close();
    out.close();
}