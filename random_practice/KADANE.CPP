#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\KADANE.INP");

int main(){
    int n,i=0; // so phan tu cua mang
    vector<int> a;

    fi>>n;

    
    while(i<n){
        int t;
        fi>>t;
        a.push_back(t);
        i++;
    }

    // phan xu li
    int sum1=0,
        sum2=0;
    i=0;


    // thuat toan
    while(i<n){
        sum1+=a[i];
        sum2=max(sum1,sum2);

        if(sum1<0){
            sum1=0;
        }

        i++;
        cout<<i<<endl;
    }

    cout<<"kq: "<<sum2<<endl;
}