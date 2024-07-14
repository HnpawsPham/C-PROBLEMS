//lớn nhất, nhỏ nhất, tìm giá trị có tần suất xuất hiện nhiều nhất, sắp xếp mảng theo thứ tự tăng dần, giảm dần
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream inp,out;
    inp.open("./txtFiles/input.txt");
    out.open("./txtFiles/output.txt");
    int a[10]={};
    //nhập mảng
    for (int i=1;i<=10;i++){
        inp>>a[i];
    }
    for (int i=1;i<=10;i++){
        out<<a[i] <<" ";
    }
    out<<"\n";
    // //find max
    int max;
    max=a[1];
    for (int i=2;i<=10;i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    out<<"Maximum: "<<max<<"\n";
    // find min
     int min;
    min=a[1];
    for (int i=2;i<=10;i++){
        if (a[i]<min){
            min=a[i];
        }
    }
    out<<"Minimum: "<<min;
    out<<"\n";
    //lon - be
    int temp;
    for (int i=1;i<=9;i++){
        for (int j=i+1;j<=10;j++){
            if (a[j]>=a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    out<<"Mang sap xep tu lon-be: \n";
    for (int i=1;i<=10;i++){
        out<<a[i] <<" ";
    }
    out<<"\n";
    // be-lon
     for (int i=1;i<=10;i++){
        for (int j=i+1;j<=9;j++){
            if (a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     out<<"Mang sap xep tu bé-lớn: \n";
    for (int i=1;i<=10;i++){
        out<<a[i]<<" ";
    }
    // tan so
    int maxtanso,dem,x;
    maxtanso=0;
    dem=0;
    for (int i=1;i<=10;i++){
        dem=0;
        for (int j=1;j<=10;j++){
            if (a[i]==a[j]){
                dem+=1;
            }
        }
        if (dem>maxtanso){
            maxtanso=dem;
            x=a[i];
        }
    }
    out<<"\n";
    out<<"Gia tri co tan so xuat hien nhieu nhat la: "<<x;

    inp.close();
    out.close();
}