#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\DEMSO.INP"),
        out(".\\txt\\DEMSO.OUT");

int n;
vector<long long> a;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    fi>>n;
    int cnt=0;

    for(int i=0; i<n; i++){
        int t;
        fi>>t;
        a.push_back(t);

        if(a[i] %3 == 0 && a[i]%9 !=0){
            cnt++;
        }
    }

    out<<cnt<<endl;
}