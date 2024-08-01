#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BAI7.INP");

long long n, sl=0;
vector<long long> a;
vector<long long> b;

bool Greater(long long value1, long long value2, vector<long long> b){
    long long l=0;
    long long r = b.size() - 1;

    while(l<=r){
        long long mid = (l+r)/2;

        if(b[mid] > value1 || b[mid] > value2){
            return true;
        }
        else if(b[mid] <= value1 || b[mid] <= value2){
            l = mid+1;
        }
    }

    return false;
}

int main(){
    fi>>n;
    for(long long i=0; i<n; i++){
        int t;
        fi>>t;
        a.push_back(t);
    }

    sl=n-1;

    for(long long len = 1; len<n-(n/2); len++){
        for(long long i=0; i<n/2-1; i++){

            if(i+1 != n-len){
                vector<long long> b(a.begin() + i+2, a.end()-len);
                sort(b.begin(), b.end());

                cout<<a[i+1]<<" "<<a[n-len]<<" "<<Greater(a[i+1], a[n-len], b)<<endl;
                for(int i=0; i<b.size(); i++){
                    cout<<b[i]<<" ";
                }
                cout<<endl;

                if(Greater(a[i+1], a[n-len], b) == false){
                    sl++;
                }
            }
        }
    }

    cout<<sl<<endl;

    fi.close();
}