#include <bits/stdc++.h>
using namespace std;

int k;
bool isExist = false;
long long sumUoc[20000];
int ngto[20000];

void sieve(){
    for(int i=0; i<=k; i++){
        ngto[i] = 1;
    }
    ngto[0] = 0;
    ngto[1] = 0;

    for(int i=2; i<sqrt(k); i++){
        if(ngto[i] == 1){
            for(int j=i*i; j<=k; j+=i){
                ngto[j] = 0;
            }
        }
    }
}

long long timTongUoc(int num){
    long long sum = 1;

    if(ngto[num] == 0){
        for(int i=num-1; i>1; i--){
            if(num%i == 0){
                sum+=i;
            }
        }
    }
    
    return sum;
}

void check(int num){
    for(int i = num-1; i>=2; i--){
        if(sumUoc[i] == num && i == sumUoc[num]){
            cout<<i<<" "<<num<<endl;

            isExist = true;
            break;
        }
    }
}

int main(){
    cin>>k;

    sieve();

    for(int i=2; i<=k; i++){
        sumUoc[i] = timTongUoc(i);
        check(i);
    }

    if(isExist == false){
        cout<<0;
    }
}