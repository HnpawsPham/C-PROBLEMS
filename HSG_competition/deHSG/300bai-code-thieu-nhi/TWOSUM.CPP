#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TWOSUM.INP");

long long n,k;
bool sastified  = false;
pair <long long, long long> a[100000000];

long long binarySearch(long long value, long long index){
    sastified  = false;
    long long l=0; long long r = n-1;

    while(l<=r){
        long long mid = (l+r)/2;

        if(a[mid].first == value && a[mid].second != index){
            sastified = true;
            return a[mid].second;
        }
        else if(a[mid].first > value){
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }

    return 0;
}

int main(){
    fi>>n>>k;

    for(long long i=0; i<n; i++){
        fi>>a[i].first;
        a[i].second = i;
    }

    sort(a, a+n);

    for(long long i=0; i<n; i++){
        long long index = binarySearch(k-a[i].first, a[i].second);

        if(sastified == true){
            cout<<a[i].second<<" "<<index<<endl;
            break;
        }
    }
}