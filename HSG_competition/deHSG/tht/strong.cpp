#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\strong.inp"),
        out(".\\txt\\strong.out");

int n,sum=0,all=0;
long long minn = 1e18;
long long a[10000000];
int isExist[10000000];

int min(long long a, long long b){
    if(a<b){
        return a;
    }
    return b;
}

int quayluisinhtohop(int i, int len){
    for(int j = 1; j<=n; j++){
        if(isExist[j] == 0){
            sum+=a[j];
            isExist[j] = 1;

            if(i == len){
                minn = min(minn, max((all-sum),sum) - min((all-sum),sum));

                if(minn == 0){
                    return 0;
                }

                sum=0;
            }
            else{
                quayluisinhtohop(i+1, len);
            }
            isExist[j] = 0;
        }
    }
    sum=0;
}

int main(){
    fi>>n;

    for(int i=1; i<=n; i++){
        fi>>a[i];
        all+=a[i];
    }

    memset(isExist, false, n);

    for(int len = 1; len<n; len++){   
        quayluisinhtohop(1, len);
    }
    

    cout<<minn<<endl;

    fi.close();
    out.close();
}