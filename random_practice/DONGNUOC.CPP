#include <bits/stdc++.h>
using namespace std;

unsigned long long sl=0,n;

void phantich(long long num){
    if(num==2 || num==3 || num==5){
        sl=1;
    }
    else if(fmod(num,5)==0){
        sl=num/5;
    }
    else{
        long long remain = fmod(num,10);
        sl+=(num-remain)/5;
        
        for(int i=5; i>=2; i--){
            if(i!=4){
                while(remain-i>=2){
                    sl++;
                    remain-=i;
                }
            }
        }
        if(remain>0){
            sl++;
        }
        
    }
    cout<<sl<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    phantich(n);
}