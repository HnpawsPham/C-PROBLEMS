#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\SODB.INP"),
        out(".\\txt\\SODB.OUT");

int n;
int A[50000];

bool ngto(int num){
    int dem=0;
    if(num<2){
        return false;
    }
    else{
        for(int i=2; i<num; i++){
            if(num%i == 0){
                dem++;
            }
        }
        if(dem==0){
            return true;
        }
    }
    return false;
}

bool special(int num){
    int odd=0,even=0;

    while(num>0){
        if(num%10%2 == 0){
            even++;
        }
        else{
            odd++;
        }
                num/=10;
    }
    if(odd !=even){
        return true;
    }
    return false;
}

int main(){
    fi>>n;
    int quantity=0;

    for(int i=0; i<n; i++){
        fi>>A[i];
        if(ngto(A[i])){
            if(special(A[i])){
                quantity++;
            }
        }
    }

    out<<quantity;
}