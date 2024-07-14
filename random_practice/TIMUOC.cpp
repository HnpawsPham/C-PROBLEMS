#include <bits/stdc++.h>
using namespace std;

fstream fi(".\\txt\\TIMUOC.INP"),
        out(".\\txt\\TIMUOC.OUT");


int n,dem=0;
int a[100000000];

void find(int *a, int n, int &dem){
    int j=0;

    // tìm số ước
    for(int i=1; i<sqrt(n);i++){
        if(n%i==0){
            if(i != n/i){
                dem+=2; 
            }
            else{
                dem++;
            }
            a[j]=i;     //gán ước vào mảng
            j++;
        }

    }

    // gán ước vào mảng

    for(int i=dem-1; i>sqrt(dem)-1; i--){
        cout<<i<<endl;
        a[i]=n/a[dem-i-1];
    }
}

int main(){
    fi>>n;

    find(a,n,dem);

    for(int i=0; i<dem; i++){
        out<<a[i]<<", ";
    }

    
    out<<"số ước: "<<dem<<endl;
}