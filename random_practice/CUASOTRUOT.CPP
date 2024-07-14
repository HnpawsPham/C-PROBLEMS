#include <bits/stdc++.h>
using namespace std;

// TIM DOAN CON LIEN TIEP CO K PHAN TU CO TONG LON NHAT
fstream fi(".\\txt\\CUASOTRUOT.INP");

int n,k;
vector<int> a;

int main(){
    fi>>n>>k;

    for(int i=0; i<n; i++){
        int t;
        fi>>t;
        a.push_back(t);
    }

    int sum=0, chosen=0, index=0;

    // tim tong cua doan con dau tien 
    for(int i=0; i<k; i++){
        sum+=a[i];
    }
    chosen=sum; //luu tong 

    // thuat toan chinh
    for(int i=1; i+k-1<n; i++){
        sum = sum - a[i-1] + a[i+k-1];

        if(sum>=chosen){
            chosen = sum;
            index=i; // vi tri phan tu dau tien cua doan con co tong lon nhat
        }
    }

    // in ra
    for(int i=index; i<k+index; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}