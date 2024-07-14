#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream fin;
    fin.open("./txtFiles/b3.txt");
    int a[10]={};
    for(int i=0;i<10;i++){
        fin>>a[i];
    }
    // sap xep tang dan
    int temp;
    for(int i=0;i<9;i++){
        for (int j=i+1;j<10;j++){
            if (a[j]>a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    fin<<"\n";
    for(int i=0;i<10;i++){
        fin<<a[i]<<" ";
    }
    fin.close();
}