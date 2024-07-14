#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\BELAMTOAN.INP");
long long a, b;
long long sum = 0;
long long res = 0;

int main(){
    fi>>a>>b;

    int i = 1;
    while(sum+i <= a){
        sum+=i;
        i++;
    }

    if(sum < a){
        sum+=i;
        res = res + i * (sum - a + 1);   
        i++;
    }
    else{
        res += (i-1);
    }

    while(sum+i <= b){
        sum+=i;
        res = res + i * i;
        i++;
    }

    if(sum < b){
        sum+=i;
        res = res + (i * i) - (i * (sum - b));   
    }

    cout<<res<<endl;
}