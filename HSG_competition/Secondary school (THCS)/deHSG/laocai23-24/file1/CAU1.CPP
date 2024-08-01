#include <bits/stdc++.h>
using namespace std;

int n,sl=0;
int ngto[3000000];
int sumUoc[3000000];

void sieve(){
    for(int i=0; i<=n; i++){
        ngto[i]=1;
    }

    ngto[0]=0;
    ngto[1]=0;

    for(int i=2; i<sqrt(n); i++){
        if(ngto[i] == 1){
            for(int j=i*i; j<=n; j+=i){
                ngto[j] = 0;
            }
        }
    }
}

long long timTongUoc(int num){
    long long sum = 1 + num;

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
    for(int i=num-1; i>=2; i--){
        if(sumUoc[num] == i || sumUoc[i] == num){
            sl++;
            break;
        }
    }
}

int main(){
    cin>>n;

    sieve();

    for(int i=2; i<=n; i++){
        sumUoc[i] = timTongUoc(i);
        check(i);
    }
    
    cout<<sl<<endl;
}