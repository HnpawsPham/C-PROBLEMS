#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\PTB2.INP");

int n, sl=0;
int a[1000000];

bool check(int a, int b, int c){
    if(a-b+c == 0){
        return true;
    }

    return false;
}

int main(){
    fi>>n;

    for(int i=0; i<n; i++){
        fi>>a[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int z=0; z<n; z++){
                if(i!=j && j!=z && i!=z){
                    
                    if(check(a[i],a[j],a[z])){
                        sl++;
                    }
                }
            }
        }
    }

    cout<<sl<<endl;
}
// lam full test kieu gi? 7/3/2024
// dung 2 con tro (tuong tu 3 sum) 8/10/2024