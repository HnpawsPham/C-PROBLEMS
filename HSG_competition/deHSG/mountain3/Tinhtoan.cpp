#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TINHTOAN.INP"),
        out(".\\txt\\TINHTOAN.OUT");

int n,pocket=0;
int a[1000000];


int main(){
    fi>>n;

    for(int i=0; i<n; i++){
        fi>>a[i];
    }


    int i=0;
    int steps = 0;

    while(i < n){
        steps++;
        cout<<i<<". "<<a[i]<<" steps: "<<steps<<endl;
        if(a[i]>0){
            pocket+=a[i];
            a[i]=0;
        }
        else{
            if(abs(a[i])<=pocket){
                pocket+=a[i];
                a[i]=0;
            }
        }
        for(int j=0; j<i; j++){
            if(a[j]<0 && abs(a[j])<=pocket){
                i--;
                pocket+=a[j];
                a[j]=0;
                steps++;
            }
        }
        i++;
    }

    cout<<steps<<endl;
    cout<<"pocket: "<<pocket<<endl;
}