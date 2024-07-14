#include <bits\stdc++.h>
using namespace std;


void nhap(int **a, int n) {
    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cout << "Nhap a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void tong_cheo(int ** a, int n){
    int t=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                t+=a[i][j];
            }
        }
    }
    cout<<"Tong cac phan tu co trong duong cheo chinh la: "<<t<<endl;
}

int main(){
    int n;
    cout<<"Nhap n: ";
    cin>>n;

    int **a= new int*[n];

    nhap(a,n);
    tong_cheo(a,n);

}