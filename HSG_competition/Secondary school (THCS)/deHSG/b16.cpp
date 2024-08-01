#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
// tbc số dương
void tbc(int a[], int n){
    fstream out;
    out.open("./txtFiles/output16.txt");
    int tbc,dem;
    tbc=0;
    dem=0;
    for (int i=0;i<n;i++){
        if (a[i]>0){
            tbc+=a[i];
            dem++;
        }
    }
    tbc=static_cast<float>(tbc)/static_cast<float>(dem);
    cout<<"Trung bình cộng của mảng: "<<tbc<<"\n";
}
// chia hết cho 3
void divideThree(int a[],int n){
    fstream out;
    out.open("./txtFiles/output16.txt");
    int dem=0;
    for (int i=0;i<n;i++){
        if (a[i]%3==0){
            dem++;
        }
    }
    cout<<"Có "<<dem<<" số chia hết cho 3"<<endl;
}
// vị trí của số 0 trong mảng
void indexOf0(int a[],int n){
    fstream out;
    out.open("./txtFiles/output16.txt");
    bool hasZero=false;
    for (int i=0;i<n;i++){
        if (a[i]==0){
            cout<<i<<"; ";
            hasZero=true;
        }
    }
    if(hasZero){
        cout<<" là những vị trí của số 0 trong mảng";
    }
}
int main(){
    fstream fi,out;
    fi.open("./txtFiles/input16.txt");
    out.open("./txtFiles/output16.txt");
    int a[100]={};
    int n;
    fi>>n;
   for (int i=0;i<n;i++){
        fi>>a[i];
    }
    fi.close();
    tbc(a,n);
    divideThree(a,n);
    indexOf0(a,n);
    out.close();
}