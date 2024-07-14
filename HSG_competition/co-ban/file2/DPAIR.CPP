#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\DPAIR.INP");

int n,s, cnt=0;
vector<int> a;

int last(int l, int value){
    int r = n, pos=-1;

    while(l<r){
        int mid = (l+r)/2;
        cout<<mid<<endl;

        if(a[mid] == value){
            pos = mid;
            r = mid-1;
        }
        else if(a[mid] < value){
            l = mid + 1;
        }
        else{
            r = mid -1;
        }
    }

    return pos;
}

void search(){
    for(int i=0; i<n; i++){
        int minus = s - a[i];

        int l=0, r=n;

        while(l<=r){
            int mid = (l+r)/2;

            if(a[mid] == minus){
                cnt+= (last(l,a[mid]) - mid + 1);
            }
            else if(a[mid] < s){
                l = mid+1;
            }
            else{
                r = mid - 1;
            }
        }
    }

}

int main(){
    fi>>n>>s;
    for(int i=0; i<n; i++){
        int t;
        fi>>t;
        a.push_back(t);
    }

    sort(a.begin(), a.end());
    search();

    cout<<cnt<<endl;
}